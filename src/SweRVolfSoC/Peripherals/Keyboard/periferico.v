

module periferico
  #(parameter [31:0] clk_freq_hz = 0)
 (input wire 	     i_clk,
  input wire 	     i_rst,

   // bus wishbone
  input wire [5:0]  i_wb_adr,   // CPU MMIO address
  input wire [31:0] i_wb_dat, // input (write) data
  input wire [3:0]  i_wb_sel,	  // bus selector
  input wire 	     i_wb_we,	  // write-enable
  input wire 	     i_wb_cyc,	  // bus cycle
  input wire 	     i_wb_stb,	  // strobe
  output reg [31:0] o_wb_rdt,	  // output (read) data
  output reg 	     o_wb_ack,   // acknowledge
  input PS2_CLK,                // clock
  input PS2_DATA);              // data
	


  
   PS2Receiver PS2 (
   .clk(i_clk),
   .kclk(PS2_CLK),
   .kdata(PS2_DATA),
   .keycodeout(keycode)
   );
// Fixme recordar periodo de reloj y eliminar el write 

   reg CLK50MHZ=0;    
  wire [31:0]keycode;
  // generic 32-bit registers
  reg [31:0] reg0;    // offset 0h
  reg [31:0] reg1;    // offset 4h
  reg [31:0] reg2;    // offset 8h
  reg [31:0] reg3;    // offset Ch
    
  // Wishbone write
  wire reg_we = i_wb_cyc & i_wb_stb & i_wb_we & !o_wb_ack;

  always @(posedge i_clk) begin
    // always acknowledge any Wishbone cycle 
    o_wb_ack <= i_wb_cyc & !o_wb_ack;

    // escritura del CPU a los registros
    if (reg_we)
	  case (i_wb_adr[5:2])
	      // REG0
	     0: begin
	        //if (i_wb_sel[3]) begin
	        reg0 <= keycode;  
	     end
	     1: begin
	        //if (i_wb_sel[3]) begin
	        reg1 <= i_wb_dat;  
	     end
	     2: begin
	        //if (i_wb_sel[3]) begin
	        reg2 <= i_wb_dat;  
	     end
	     3: begin
	        //if (i_wb_sel[3]) begin
	        reg3 <= i_wb_dat;  
	     end
	  endcase
	      
	  // lectura del CPU a los registros
	  case (i_wb_adr[5:2])
	     0: o_wb_rdt <= keycode;
	     1: o_wb_rdt <= reg1;
	     2: o_wb_rdt <= reg2;
	     3: o_wb_rdt <= reg3;
	  endcase

    // reset
    if (i_rst) begin
      o_wb_ack <= 0;
      o_wb_rdt <= 0;
    end

  end
   
   
endmodule
	     
	       
	       
	       
        
