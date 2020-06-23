module register_file(ra1, ra2, wa, wd, we, clock, rd1, rd2, wrap);
  input[1:0] ra1, ra2, wa;
  input[15:0] wd;
  input[1:0] wrap;
  input we, clock;
  output[15:0] rd1, rd2;
  reg[15:0] RF [15:0];

  //----Just for debug purposes----
  //integer i;
  //initial begin
  //  for (i = 0; i < 16; i = i + 1) $dumpvars(0,RF[i]);
  //end
  //----Just for debug purposes----

  assign rd1 = RF[ra1 + (4 * wrap)];
  assign rd2 = RF[ra2 + (4 * wrap)];

  always @(posedge clock) begin
    if(we) RF[wa + (4 * wrap)] <= wd;
  end
endmodule
