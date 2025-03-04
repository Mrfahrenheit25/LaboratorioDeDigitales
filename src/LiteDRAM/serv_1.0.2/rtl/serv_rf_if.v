`default_nettype none
module serv_rf_if
  #(parameter WITH_CSR = 1)
  (//RF Interface
   output wire [4+WITH_CSR:0] o_wreg0,
   output wire [4+WITH_CSR:0] o_wreg1,
   output wire 	     o_wen0,
   output wire 	     o_wen1,
   output wire 	     o_wdata0,
   output wire 	     o_wdata1,
   output wire [4+WITH_CSR:0] o_rreg0,
   output wire [4+WITH_CSR:0] o_rreg1,
   input wire 	     i_rdata0,
   input wire 	     i_rdata1,

   //Trap interface
   input wire 	     i_trap,
   input wire 	     i_mret,
   input wire 	     i_mepc,
   input wire 	     i_mem_misalign,
   input wire 	     i_bufreg_q,
   input wire 	     i_bad_pc,
   output wire 	     o_csr_pc,
   //CSR interface
   input wire 	     i_csr_en,
   input wire [1:0]  i_csr_addr,
   input wire 	     i_csr,
   output wire 	     o_csr,
   //RD write port
   input wire 	     i_rd_wen,
   input wire [4:0]  i_rd_waddr,
   input wire 	     i_ctrl_rd,
   input wire 	     i_alu_rd,
   input wire 	     i_rd_alu_en,
   input wire 	     i_csr_rd,
   input wire 	     i_rd_csr_en,
   input wire 	     i_mem_rd,

   //RS1 read port
   input wire [4:0]  i_rs1_raddr,
   output wire 	     o_rs1,
   //RS2 read port
   input wire [4:0]  i_rs2_raddr,
   output wire 	     o_rs2);


`include "serv_params.vh"

   /*
    ********** Write side ***********
    */

   generate
   if (WITH_CSR) begin
   wire 	     rd = (i_ctrl_rd ) |
			  (i_alu_rd & i_rd_alu_en) |
			  (i_csr_rd & i_rd_csr_en) |
			  (i_mem_rd);

   wire 	     mtval = i_mem_misalign ? i_bufreg_q : i_bad_pc;

   assign 	     o_wdata0 = i_trap ? mtval  : rd;
   assign	     o_wdata1 = i_trap ? i_mepc : i_csr;

   //port 0 rd mtval
   //port 1 csr mepc
   //mepc  100010
   //mtval 100011
   //csr   1000xx
   //rd    0xxxxx
   assign o_wreg0 = i_trap ? {4'b1000,CSR_MTVAL} : {1'b0,i_rd_waddr};
   assign o_wreg1 = i_trap ? {4'b1000,CSR_MEPC}  : {4'b1000,i_csr_addr};

   assign       o_wen0 = i_trap | i_rd_wen;
   assign       o_wen1 = i_trap | i_csr_en;

   /*
    ********** Read side ***********
    */

   //0 : RS1
   //1 : RS2 / CSR


   assign o_rreg0 = {1'b0, i_rs1_raddr};
   assign o_rreg1 =
		 i_trap   ? {4'b1000, CSR_MTVEC} :
		 i_mret   ? {4'b1000, CSR_MEPC} :
		 i_csr_en ? {4'b1000, i_csr_addr} :
		 {1'b0,i_rs2_raddr};

   assign o_rs1 = i_rdata0;
   assign o_rs2 = i_rdata1;
   assign o_csr = i_rdata1 & i_csr_en;
   assign o_csr_pc = i_rdata1;

   end else begin
      wire 	     rd = (i_ctrl_rd ) |
			  (i_alu_rd & i_rd_alu_en) |
			  (i_mem_rd);

      assign 	     o_wdata0 = rd;
      assign	     o_wdata1 = 1'b0;

      assign o_wreg0 = i_rd_waddr;
      assign o_wreg1 = 5'd0;

      assign       o_wen0 =i_rd_wen;
      assign       o_wen1 = 1'b0;

   /*
    ********** Read side ***********
    */

      assign o_rreg0 = i_rs1_raddr;
      assign o_rreg1 = i_rs2_raddr;

      assign o_rs1 = i_rdata0;
      assign o_rs2 = i_rdata1;
   end // else: !if(WITH_CSR)
   endgenerate
endmodule
