module global_memory(wd1, wd2, wd3, wd4, rd1, rd2, rd3, rd4, address, clock, we);

  input[15:0] wd1, wd2, wd3, wd4;
  input [3:0] address;
  input clock, we;
  output[15:0] rd1, rd2, rd3, rd4;
  reg[15:0] RF [31:0];

  assign rd1 = RF[address];
  assign rd2 = RF[address + 1];
  assign rd3 = RF[address + 2];
  assign rd4 = RF[address + 3];

  //----Just for debug purposes----
  //integer i;
  //initial begin
  //  for (i = 0; i < 32; i = i + 1) $dumpvars(0,RF[i]);
  //end
  //----Just for debug purposes----

  always @(posedge clock) begin
    if(we) RF[address] <= wd1;
    if(we) RF[address + 1] <= wd2;
    if(we) RF[address + 2] <= wd3;
    if(we) RF[address + 3] <= wd4;
  end
endmodule
