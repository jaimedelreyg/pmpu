module posit_unit (in1, in2, start, out, inf, zero, done, op_sel);

input start;
input[1:0] op_sel;
input [15:0] in1, in2;
output [15:0] out;
output done, inf, zero;

reg[15:0] q_out;
reg q_done;

parameter posit_N=16;
parameter posit_es=2;

//Posit Add
reg[15:0] add_in1, add_in2;
wire[15:0] add_out;
reg add_start;
wire add_inf, add_zero, add_done;

//Posit Mult
reg[15:0] mult_in1, mult_in2;
wire[15:0] mult_out;
reg mult_start;
wire mult_inf, mult_zero, mult_done;

//Posit Mult
reg[15:0] div_in1, div_in2;
wire[15:0] div_out;
reg div_start;
wire div_inf, div_zero, div_done;


posit_add #(.N(posit_N), .es(posit_es)) PADD (.in1(add_in1), .in2(add_in2), .start(add_start), .out(add_out), .inf(add_inf), .zero(add_zero), .done(add_done));
posit_mult #(.N(posit_N), .es(posit_es)) PMULT (.in1(mult_in1), .in2(mult_in2), .start(mult_start), .out(mult_out), .inf(mult_inf), .zero(mult_zero), .done(mult_done));
posit_div #(.N(posit_N), .es(posit_es)) PDIV (.in1(div_in1), .in2(div_in2), .start(div_start), .out(div_out), .inf(div_inf), .zero(div_zero), .done(div_done));

always @(*)
  if(start) begin
    case(op_sel)
      //add
      2'b00: begin
          add_start <= start;
          add_in1 <= in1;
          add_in2 <= in2;
          q_out <= add_out;
          q_done <= add_done;
        end
      //mul
      2'b01: begin
          mult_start <= start;
          mult_in1 <= in1;
          mult_in2 <= in2;
          q_out <= mult_out;
          q_done <= mult_done;
        end
      //div
      2'b10: begin
          div_start <= start;
          div_in1 <= in1;
          div_in2 <= in2;
          q_out <= div_out;
          q_done <= div_done;
        end
    endcase
  end

  assign out = q_out;
  assign done = q_done;


endmodule
