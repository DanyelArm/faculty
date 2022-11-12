//execitiul 2 tb
module MSB_tb();
  reg [15:0]a_tb;
  wire [7:0]b_tb;
  initial begin
    a_tb = 16'b1111100011111110;
    $display("Cel mai mare byte a valorii de intrare este %b", b_tb);
    #2;
    a_tb = 16'b1111000011000000;
    $display("Cel mai mare byte a valorii de intrare este %b", b_tb);
    #2;
  end
  MSB legatura(
  .a(a_tb),
  .b(b_tb));
endmodule
