//exercitiul 2
module MSB(
  input [15:0] a,
  output reg[7:0] b);
  initial begin
    if(a[0+:8]>a[15-:8])
      assign b = a[0+:8];
    else
      assign b = a[15-:8];
  end
endmodule