module posit_vector_processor(clk, rst, gpup_req_i, gpup_addr_i, gpup_wdata_i, gpup_rvalid_o, gpup_rdata_o);

input clk;
input rst;
input gpup_req_i;
input [31:0] gpup_addr_i;
input [31:0] gpup_wdata_i;
output gpup_rvalid_o;
output [31:0] gpup_rdata_o;

//Aux
reg [31:0] q_instr;
reg [31:0] q_rdata_o;
reg [31:0] q_rvalid_o;
reg ready;
reg mem_pipeline;
reg[1:0] op_pipeline;

assign gpup_rvalid_o = q_rvalid_o;
assign gpup_rdata_o = q_rdata_o;

//Register Files regs
reg [1:0] rf1ra1, rf1ra2, rf1wa;
reg [1:0] rf2ra1, rf2ra2, rf2wa;
reg [1:0] rf3ra1, rf3ra2, rf3wa;
reg [1:0] rf4ra1, rf4ra2, rf4wa;
reg [15:0] rf1wd, rf2wd, rf3wd, rf4wd;
reg rf1we, rf2we, rf3we, rf4we;
wire [15:0] rf1rd1, rf1rd2;
wire [15:0] rf2rd1, rf2rd2;
wire [15:0] rf3rd1, rf3rd2;
wire [15:0] rf4rd1, rf4rd2;
reg [1:0] rf_warp;

//Warp Control regs
reg wc_start, wc_blockdim_we;
reg [3:0] wc_blockdim_i;
reg [3:0] wc_blockdim_o;
reg [1:0] wc_warp;
reg [3:0] max_warp;

//Global Memory
reg [15:0] gbwd1, gbwd2, gbwd3, gbwd4;
wire [15:0] gbrd1, gbrd2, gbrd3, gbrd4;
reg [3:0] gb_address;
reg gb_we;

//Posit Unit
reg[15:0] unit1_in1, unit1_in2, unit2_in1, unit2_in2, unit3_in1, unit3_in2, unit4_in1, unit4_in2;
reg [1:0] unit1_op_sel, unit2_op_sel, unit3_op_sel, unit4_op_sel;
wire[15:0] unit1_out, unit2_out, unit3_out, unit4_out;
reg unit1_start, unit2_start, unit3_start, unit4_start;
wire unit1_inf, unit1_zero, unit1_done;
wire unit2_inf, unit2_zero, unit2_done;
wire unit3_inf, unit3_zero, unit3_done;
wire unit4_inf, unit4_zero, unit4_done;

register_file RF1(.ra1(rf1ra1), .ra2(rf1ra2), .wa(rf1wa), .wd(rf1wd), .we(rf1we), .clock(clk), .rd1(rf1rd1), .rd2(rf1rd2), .wrap(rf_warp));
register_file RF2(.ra1(rf2ra1), .ra2(rf2ra2), .wa(rf2wa), .wd(rf2wd), .we(rf2we), .clock(clk), .rd1(rf2rd1), .rd2(rf2rd2), .wrap(rf_warp));
register_file RF3(.ra1(rf3ra1), .ra2(rf3ra2), .wa(rf3wa), .wd(rf3wd), .we(rf3we), .clock(clk), .rd1(rf3rd1), .rd2(rf3rd2), .wrap(rf_warp));
register_file RF4(.ra1(rf4ra1), .ra2(rf4ra2), .wa(rf4wa), .wd(rf4wd), .we(rf4we), .clock(clk), .rd1(rf4rd1), .rd2(rf4rd2), .wrap(rf_warp));

global_memory GB(.wd1(gbwd1), .wd2(gbwd2), .wd3(gbwd3), .wd4(gbwd4), .rd1(gbrd1), .rd2(gbrd2), .rd3(gbrd3), .rd4(gbrd4), .address(gb_address), .clock(clk), .we(gb_we));

posit_unit PUNIT1 (.in1(unit1_in1), .in2(unit1_in2), .start(unit1_start), .out(unit1_out), .inf(unit1_inf), .zero(unit1_zero), .done(unit1_done), .op_sel(unit1_op_sel));
posit_unit PUNIT2 (.in1(unit2_in1), .in2(unit2_in2), .start(unit2_start), .out(unit2_out), .inf(unit2_inf), .zero(unit2_zero), .done(unit2_done), .op_sel(unit2_op_sel));
posit_unit PUNIT3 (.in1(unit3_in1), .in2(unit3_in2), .start(unit3_start), .out(unit3_out), .inf(unit3_inf), .zero(unit3_zero), .done(unit3_done), .op_sel(unit3_op_sel));
posit_unit PUNIT4 (.in1(unit4_in1), .in2(unit4_in2), .start(unit4_start), .out(unit4_out), .inf(unit4_inf), .zero(unit4_zero), .done(unit4_done), .op_sel(unit4_op_sel));

//Evaluate Intructions
always @(posedge clk) begin
  if(gpup_req_i) begin
    case(gpup_wdata_i[31:28])
      //Read from GB
      4'b1000: begin
                    gb_address <= gpup_wdata_i[5:0];
                    q_instr <= gpup_wdata_i;
                    ready <= 1;
                end
      //Write to GB
      4'b0111: begin
                  gb_we <= 1;
                  gb_address <= gpup_wdata_i [27:20];
                  gbwd1 <= gpup_wdata_i[15:0];
                  ready <= 1;
               end
      //Write blockdim
      4'b0110:   begin
                  wc_blockdim_we <= 1;
                  wc_blockdim_i <= gpup_wdata_i[3:0];
                  ready <= 1;
                end
      //Wrapped instructions
      4'b0001,
      4'b0010,
      4'b0011,
      4'b0100,
      4'b0101:  begin
                  q_instr <= gpup_wdata_i;
                  if(~wc_start) wc_start <= 1;
                end
    endcase
  end
end

//Second Stage Read from global_memory

always @(posedge clk) begin

  if(q_instr[31:28] == 4'b1000) begin
    q_rdata_o[15:0]  <= gbrd1;
    ready <= 1;
  end
end

//****wrapped instructions****

//BlockDim Registry
always @(posedge clk) begin
  if(wc_blockdim_we) begin
      wc_blockdim_o <= wc_blockdim_i;
      max_warp <= wc_blockdim_i / 4;
  end
end

always @(posedge clk) begin
  if(wc_start && ~ready) begin

      if(wc_warp == max_warp) ready <= 1;

      case(q_instr[31:28])
        //load
        4'b0001:     begin
                      //Read from Memory
                      if(~mem_pipeline) begin

                          mem_pipeline <= 1;

                          wc_warp <= wc_warp + 1;

                          rf1wa <= q_instr[27:20];
                          rf2wa <= q_instr[27:20];
                          rf3wa <= q_instr[27:20];
                          rf4wa <= q_instr[27:20];

                          gb_address <= q_instr[5:0] + (wc_warp * 4);

                          rf1we <= 0;
                          rf2we <= 0;
                          rf3we <= 0;
                          rf4we <= 0;

                      end
                      else begin

                          mem_pipeline <= 0;
                          rf_warp <= rf_warp + 1;

                          rf1wd <= gbrd1;
                          rf2wd <= gbrd2;
                          rf3wd <= gbrd3;
                          rf4wd <= gbrd4;

                          case((wc_blockdim_o - ((rf_warp + 1) * 4)))
                              4'b0000 : begin
                                          rf1we <= 0;
                                          rf2we <= 0;
                                          rf3we <= 0;
                                          rf4we <= 0;
                                        end
                              4'b0001 : begin
                                          rf1we <= 1;
                                          rf2we <= 0;
                                          rf3we <= 0;
                                          rf4we <= 0;
                                        end

                              4'b0010 : begin
                                          rf1we <= 1;
                                          rf2we <= 1;
                                          rf3we <= 0;
                                          rf4we <= 0;
                                        end
                              4'b0011 : begin
                                          rf1we <= 1;
                                          rf2we <= 1;
                                          rf3we <= 1;
                                          rf4we <= 0;
                                        end
                              default : begin
                                          rf1we <= 1;
                                          rf2we <= 1;
                                          rf3we <= 1;
                                          rf4we <= 1;
                                        end
                          endcase
                      end
        end
        //store
        4'b0010: begin

                if(~mem_pipeline) begin

                    rf_warp <= rf_warp + 1;

                    mem_pipeline <= 1;

                    rf1ra1 <= q_instr[27:20];
                    rf2ra1 <= q_instr[27:20];
                    rf3ra1 <= q_instr[27:20];
                    rf4ra1 <= q_instr[27:20];

                    gb_we <= 0;

                 end else begin

                     gbwd1 <= rf1rd1;
                     gbwd2 <= rf2rd1;
                     gbwd3 <= rf3rd1;
                     gbwd4 <= rf4rd1;

                     wc_warp <= wc_warp + 1;
                     gb_address <= q_instr[5:0] + (wc_warp * 4);

                     gb_we <= 1;

                     mem_pipeline <= 0;
                end
        end
        //posit_op
        4'b0011, 4'b0100, 4'b0101: begin

              case(op_pipeline)

                2'b00: begin
                  rf_warp <= rf_warp + 1;

                  op_pipeline <= 2'b01;

                  rf1ra1 <= q_instr[21:20];
                  rf2ra1 <= q_instr[21:20];
                  rf3ra1 <= q_instr[21:20];
                  rf4ra1 <= q_instr[21:20];

                  rf1ra2 <= q_instr[13:12];
                  rf2ra2 <= q_instr[13:12];
                  rf3ra2 <= q_instr[13:12];
                  rf4ra2 <= q_instr[13:12];

                  rf1we <= 0;
                  rf2we <= 0;
                  rf3we <= 0;
                  rf4we <= 0;

                end

                2'b01: begin

                  op_pipeline <= 2'b10;

                  case(q_instr[31:28])
                    4'b0011: begin
                      unit1_op_sel <= 2'b00;
                      unit2_op_sel <= 2'b00;
                      unit3_op_sel <= 2'b00;
                      unit4_op_sel <= 2'b00;
                    end
                    4'b0100: begin
                      unit1_op_sel <= 2'b01;
                      unit2_op_sel <= 2'b01;
                      unit3_op_sel <= 2'b01;
                      unit4_op_sel <= 2'b01;
                    end
                    4'b0101: begin
                      unit1_op_sel <= 2'b10;
                      unit2_op_sel <= 2'b10;
                      unit3_op_sel <= 2'b10;
                      unit4_op_sel <= 2'b10;
                    end
                  endcase

                  unit1_in1 <= rf1rd1;
                  unit1_in2 <= rf1rd2;
                  unit1_start <= 1;

                  unit2_in1 <= rf2rd1;
                  unit2_in2 <= rf2rd2;
                  unit2_start <= 1;

                  unit3_in1 <= rf3rd1;
                  unit3_in2 <= rf3rd2;
                  unit3_start <= 1;

                  unit4_in1 <= rf4rd1;
                  unit4_in2 <= rf4rd2;
                  unit4_start <= 1;

                end

                2'b10: begin
                    op_pipeline <= 2'b11;

                    rf1wa <= q_instr[5:4];
                    rf2wa <= q_instr[5:4];
                    rf3wa <= q_instr[5:4];
                    rf4wa <= q_instr[5:4];

                    wc_warp <= wc_warp + 1;

                end

                2'b11: begin
                  if(unit1_done && unit2_done && unit3_done && unit4_done) begin

                    op_pipeline <= 2'b00;

                    rf1we <= 1;
                    rf2we <= 1;
                    rf3we <= 1;
                    rf4we <= 1;

                    rf1wd <= unit1_out;
                    rf2wd <= unit2_out;
                    rf3wd <= unit3_out;
                    rf4wd <= unit4_out;

                  end
                end

              endcase
        end
      endcase
  end
end


//Send Ready Signal and Reset Some Important Signals
always @(posedge clk) begin
  if(ready) begin
              wc_start <= 0;
              wc_blockdim_we <= 0;
              gb_we <= 0;
              rf1we <= 0;
              rf2we <= 0;
              rf3we <= 0;
              rf4we <= 0;
              wc_warp <= 2'b00;
              rf_warp <= 2'b11;
              ready <= 0;
              mem_pipeline <= 0;
              op_pipeline <= 2'b00;

              q_rvalid_o <= 1;
  end
  else q_rvalid_o <= 0;

end
endmodule
