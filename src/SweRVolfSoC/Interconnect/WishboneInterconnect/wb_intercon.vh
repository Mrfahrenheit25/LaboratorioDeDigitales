wire [31:0] wb_m2s_io_adr;
wire [31:0] wb_m2s_io_dat;
wire  [3:0] wb_m2s_io_sel;
wire        wb_m2s_io_we;
wire        wb_m2s_io_cyc;
wire        wb_m2s_io_stb;
wire  [2:0] wb_m2s_io_cti;
wire  [1:0] wb_m2s_io_bte;
wire [31:0] wb_s2m_io_dat;
wire        wb_s2m_io_ack;
wire        wb_s2m_io_err;
wire        wb_s2m_io_rty;
wire [31:0] wb_m2s_rom_adr;
wire [31:0] wb_m2s_rom_dat;
wire  [3:0] wb_m2s_rom_sel;
wire        wb_m2s_rom_we;
wire        wb_m2s_rom_cyc;
wire        wb_m2s_rom_stb;
wire  [2:0] wb_m2s_rom_cti;
wire  [1:0] wb_m2s_rom_bte;
wire [31:0] wb_s2m_rom_dat;
wire        wb_s2m_rom_ack;
wire        wb_s2m_rom_err;
wire        wb_s2m_rom_rty;
wire [31:0] wb_m2s_spi_flash_adr;
wire [31:0] wb_m2s_spi_flash_dat;
wire  [3:0] wb_m2s_spi_flash_sel;
wire        wb_m2s_spi_flash_we;
wire        wb_m2s_spi_flash_cyc;
wire        wb_m2s_spi_flash_stb;
wire  [2:0] wb_m2s_spi_flash_cti;
wire  [1:0] wb_m2s_spi_flash_bte;
wire [31:0] wb_s2m_spi_flash_dat;
wire        wb_s2m_spi_flash_ack;
wire        wb_s2m_spi_flash_err;
wire        wb_s2m_spi_flash_rty;
wire [31:0] wb_m2s_sys_adr;
wire [31:0] wb_m2s_sys_dat;
wire  [3:0] wb_m2s_sys_sel;
wire        wb_m2s_sys_we;
wire        wb_m2s_sys_cyc;
wire        wb_m2s_sys_stb;
wire  [2:0] wb_m2s_sys_cti;
wire  [1:0] wb_m2s_sys_bte;
wire [31:0] wb_s2m_sys_dat;
wire        wb_s2m_sys_ack;
wire        wb_s2m_sys_err;
wire        wb_s2m_sys_rty;
wire [31:0] wb_m2s_uart_adr;
wire [31:0] wb_m2s_uart_dat;
wire  [3:0] wb_m2s_uart_sel;
wire        wb_m2s_uart_we;
wire        wb_m2s_uart_cyc;
wire        wb_m2s_uart_stb;
wire  [2:0] wb_m2s_uart_cti;
wire  [1:0] wb_m2s_uart_bte;
wire [31:0] wb_s2m_uart_dat;
wire        wb_s2m_uart_ack;
wire        wb_s2m_uart_err;
wire        wb_s2m_uart_rty;

// GPIO
wire [31:0] wb_m2s_gpio_adr;
wire [31:0] wb_m2s_gpio_dat;
wire  [3:0] wb_m2s_gpio_sel;
wire        wb_m2s_gpio_we;
wire        wb_m2s_gpio_cyc;
wire        wb_m2s_gpio_stb;
wire  [2:0] wb_m2s_gpio_cti;
wire  [1:0] wb_m2s_gpio_bte;
wire [31:0] wb_s2m_gpio_dat;
wire        wb_s2m_gpio_ack;
wire        wb_s2m_gpio_err;
wire        wb_s2m_gpio_rty;

// GPIO2
wire [31:0] wb_m2s_gpio_adr2;
wire [31:0] wb_m2s_gpio_dat2;
wire  [3:0] wb_m2s_gpio_sel2;
wire        wb_m2s_gpio_we2;
wire        wb_m2s_gpio_cyc2;
wire        wb_m2s_gpio_stb2;
wire  [2:0] wb_m2s_gpio_cti2;
wire  [1:0] wb_m2s_gpio_bte2;
wire [31:0] wb_s2m_gpio_dat2;
wire        wb_s2m_gpio_ack2;
wire        wb_s2m_gpio_err2;
wire        wb_s2m_gpio_rty2;

// PTC
wire [31:0] wb_m2s_ptc_adr;
wire [31:0] wb_m2s_ptc_dat;
wire  [3:0] wb_m2s_ptc_sel;
wire        wb_m2s_ptc_we;
wire        wb_m2s_ptc_cyc;
wire        wb_m2s_ptc_stb;
wire  [2:0] wb_m2s_ptc_cti;
wire  [1:0] wb_m2s_ptc_bte;
wire [31:0] wb_s2m_ptc_dat;
wire        wb_s2m_ptc_ack;
wire        wb_s2m_ptc_err;
wire        wb_s2m_ptc_rty;

// PTC_B
wire [31:0] wb_m2s_ptc_adr_B;
wire [31:0] wb_m2s_ptc_dat_B;
wire  [3:0] wb_m2s_ptc_sel_B;
wire        wb_m2s_ptc_we_B;
wire        wb_m2s_ptc_cyc_B;
wire        wb_m2s_ptc_stb_B;
wire  [2:0] wb_m2s_ptc_cti_B;
wire  [1:0] wb_m2s_ptc_bte_B;
wire [31:0] wb_s2m_ptc_dat_B;
wire        wb_s2m_ptc_ack_B;
wire        wb_s2m_ptc_err_B;
wire        wb_s2m_ptc_rty_B;

// PTC_G
wire [31:0] wb_m2s_ptc_adr_G;
wire [31:0] wb_m2s_ptc_dat_G;
wire  [3:0] wb_m2s_ptc_sel_G;
wire        wb_m2s_ptc_we_G;
wire        wb_m2s_ptc_cyc_G;
wire        wb_m2s_ptc_stb_G;
wire  [2:0] wb_m2s_ptc_cti_G;
wire  [1:0] wb_m2s_ptc_bte_G;
wire [31:0] wb_s2m_ptc_dat_G;
wire        wb_s2m_ptc_ack_G;
wire        wb_s2m_ptc_err_G;
wire        wb_s2m_ptc_rty_G;

// PTC_R
wire [31:0] wb_m2s_ptc_adr_R;
wire [31:0] wb_m2s_ptc_dat_R;
wire  [3:0] wb_m2s_ptc_sel_R;
wire        wb_m2s_ptc_we_R;
wire        wb_m2s_ptc_cyc_R;
wire        wb_m2s_ptc_stb_R;
wire  [2:0] wb_m2s_ptc_cti_R;
wire  [1:0] wb_m2s_ptc_bte_R;
wire [31:0] wb_s2m_ptc_dat_R;
wire        wb_s2m_ptc_ack_R;
wire        wb_s2m_ptc_err_R;
wire        wb_s2m_ptc_rty_R;

// SPI
wire [31:0] wb_m2s_spi_accel_adr;
wire [31:0] wb_m2s_spi_accel_dat;
wire  [3:0] wb_m2s_spi_accel_sel;
wire        wb_m2s_spi_accel_we;
wire        wb_m2s_spi_accel_cyc;
wire        wb_m2s_spi_accel_stb;
wire  [2:0] wb_m2s_spi_accel_cti;
wire  [1:0] wb_m2s_spi_accel_bte;
wire [31:0] wb_s2m_spi_accel_dat;
wire        wb_s2m_spi_accel_ack;
wire        wb_s2m_spi_accel_err;
wire        wb_s2m_spi_accel_rty;

// periférico genérico
wire  [5:0] wb_m2s_per_adr;
wire [31:0] wb_m2s_per_dat;
wire  [3:0] wb_m2s_per_sel;
wire        wb_m2s_per_we;
wire        wb_m2s_per_cyc;
wire        wb_m2s_per_stb;
wire [31:0] wb_m2s_per_rdt;
wire        wb_m2s_per_ack;


wb_intercon wb_intercon0
   (.wb_clk_i           (wb_clk),
    .wb_rst_i           (wb_rst),
    .wb_io_adr_i        (wb_m2s_io_adr),
    .wb_io_dat_i        (wb_m2s_io_dat),
    .wb_io_sel_i        (wb_m2s_io_sel),
    .wb_io_we_i         (wb_m2s_io_we),
    .wb_io_cyc_i        (wb_m2s_io_cyc),
    .wb_io_stb_i        (wb_m2s_io_stb),
    .wb_io_cti_i        (wb_m2s_io_cti),
    .wb_io_bte_i        (wb_m2s_io_bte),
    .wb_io_dat_o        (wb_s2m_io_dat),
    .wb_io_ack_o        (wb_s2m_io_ack),
    .wb_io_err_o        (wb_s2m_io_err),
    .wb_io_rty_o        (wb_s2m_io_rty),
    .wb_rom_adr_o       (wb_m2s_rom_adr),
    .wb_rom_dat_o       (wb_m2s_rom_dat),
    .wb_rom_sel_o       (wb_m2s_rom_sel),
    .wb_rom_we_o        (wb_m2s_rom_we),
    .wb_rom_cyc_o       (wb_m2s_rom_cyc),
    .wb_rom_stb_o       (wb_m2s_rom_stb),
    .wb_rom_cti_o       (wb_m2s_rom_cti),
    .wb_rom_bte_o       (wb_m2s_rom_bte),
    .wb_rom_dat_i       (wb_s2m_rom_dat),
    .wb_rom_ack_i       (wb_s2m_rom_ack),
    .wb_rom_err_i       (wb_s2m_rom_err),
    .wb_rom_rty_i       (wb_s2m_rom_rty),
    .wb_spi_flash_adr_o (wb_m2s_spi_flash_adr),
    .wb_spi_flash_dat_o (wb_m2s_spi_flash_dat),
    .wb_spi_flash_sel_o (wb_m2s_spi_flash_sel),
    .wb_spi_flash_we_o  (wb_m2s_spi_flash_we),
    .wb_spi_flash_cyc_o (wb_m2s_spi_flash_cyc),
    .wb_spi_flash_stb_o (wb_m2s_spi_flash_stb),
    .wb_spi_flash_cti_o (wb_m2s_spi_flash_cti),
    .wb_spi_flash_bte_o (wb_m2s_spi_flash_bte),
    .wb_spi_flash_dat_i (wb_s2m_spi_flash_dat),
    .wb_spi_flash_ack_i (wb_s2m_spi_flash_ack),
    .wb_spi_flash_err_i (wb_s2m_spi_flash_err),
    .wb_spi_flash_rty_i (wb_s2m_spi_flash_rty),
    .wb_sys_adr_o       (wb_m2s_sys_adr),
    .wb_sys_dat_o       (wb_m2s_sys_dat),
    .wb_sys_sel_o       (wb_m2s_sys_sel),
    .wb_sys_we_o        (wb_m2s_sys_we),
    .wb_sys_cyc_o       (wb_m2s_sys_cyc),
    .wb_sys_stb_o       (wb_m2s_sys_stb),
    .wb_sys_cti_o       (wb_m2s_sys_cti),
    .wb_sys_bte_o       (wb_m2s_sys_bte),
    .wb_sys_dat_i       (wb_s2m_sys_dat),
    .wb_sys_ack_i       (wb_s2m_sys_ack),
    .wb_sys_err_i       (wb_s2m_sys_err),
    .wb_sys_rty_i       (wb_s2m_sys_rty),
    .wb_uart_adr_o      (wb_m2s_uart_adr),
    .wb_uart_dat_o      (wb_m2s_uart_dat),
    .wb_uart_sel_o      (wb_m2s_uart_sel),
    .wb_uart_we_o       (wb_m2s_uart_we),
    .wb_uart_cyc_o      (wb_m2s_uart_cyc),
    .wb_uart_stb_o      (wb_m2s_uart_stb),
    .wb_uart_cti_o      (wb_m2s_uart_cti),
    .wb_uart_bte_o      (wb_m2s_uart_bte),
    .wb_uart_dat_i      (wb_s2m_uart_dat),
    .wb_uart_ack_i      (wb_s2m_uart_ack),
    .wb_uart_err_i      (wb_s2m_uart_err),
    .wb_uart_rty_i      (wb_s2m_uart_rty),
// GPIO
    .wb_gpio_adr_o      (wb_m2s_gpio_adr),
    .wb_gpio_dat_o      (wb_m2s_gpio_dat),
    .wb_gpio_sel_o      (wb_m2s_gpio_sel),
    .wb_gpio_we_o       (wb_m2s_gpio_we),
    .wb_gpio_cyc_o      (wb_m2s_gpio_cyc),
    .wb_gpio_stb_o      (wb_m2s_gpio_stb),
    .wb_gpio_cti_o      (wb_m2s_gpio_cti),
    .wb_gpio_bte_o      (wb_m2s_gpio_bte),
    .wb_gpio_dat_i      (wb_s2m_gpio_dat),
    .wb_gpio_ack_i      (wb_s2m_gpio_ack),
    .wb_gpio_err_i      (wb_s2m_gpio_err),
    .wb_gpio_rty_i      (wb_s2m_gpio_rty),
// GPIO2
    .wb_gpio_dat_o2      (wb_m2s_gpio_dat2),
    .wb_gpio_adr_o2      (wb_m2s_gpio_adr2),
    .wb_gpio_sel_o2      (wb_m2s_gpio_sel2),
    .wb_gpio_we_o2       (wb_m2s_gpio_we2),
    .wb_gpio_cyc_o2      (wb_m2s_gpio_cyc2),
    .wb_gpio_stb_o2      (wb_m2s_gpio_stb2),
    .wb_gpio_cti_o2      (wb_m2s_gpio_cti2),
    .wb_gpio_bte_o2      (wb_m2s_gpio_bte2),
    .wb_gpio_dat_i2      (wb_s2m_gpio_dat2),
    .wb_gpio_ack_i2      (wb_s2m_gpio_ack2),
    .wb_gpio_err_i2      (wb_s2m_gpio_err2),
    .wb_gpio_rty_i2      (wb_s2m_gpio_rty2),
// PTC
    .wb_ptc_adr_o      (wb_m2s_ptc_adr),
    .wb_ptc_dat_o      (wb_m2s_ptc_dat),
    .wb_ptc_sel_o      (wb_m2s_ptc_sel),
    .wb_ptc_we_o       (wb_m2s_ptc_we),
    .wb_ptc_cyc_o      (wb_m2s_ptc_cyc),
    .wb_ptc_stb_o      (wb_m2s_ptc_stb),
    .wb_ptc_cti_o      (wb_m2s_ptc_cti),
    .wb_ptc_bte_o      (wb_m2s_ptc_bte),
    .wb_ptc_dat_i      (wb_s2m_ptc_dat),
    .wb_ptc_ack_i      (wb_s2m_ptc_ack),
    .wb_ptc_err_i      (wb_s2m_ptc_err),
    .wb_ptc_rty_i      (wb_s2m_ptc_rty),
// PTC_B
    .wb_ptc_adr_o_B      (wb_m2s_ptc_adr_B),
    .wb_ptc_dat_o_B      (wb_m2s_ptc_dat_B),
    .wb_ptc_sel_o_B      (wb_m2s_ptc_sel_B),
    .wb_ptc_we_o_B        (wb_m2s_ptc_we_B),
    .wb_ptc_cyc_o_B      (wb_m2s_ptc_cyc_B),
    .wb_ptc_stb_o_B      (wb_m2s_ptc_stb_B),
    .wb_ptc_cti_o_B      (wb_m2s_ptc_cti_B),
    .wb_ptc_bte_o_B      (wb_m2s_ptc_bte_B),
    .wb_ptc_dat_i_B      (wb_s2m_ptc_dat_B),
    .wb_ptc_ack_i_B      (wb_s2m_ptc_ack_B),
    .wb_ptc_err_i_B      (wb_s2m_ptc_err_B),
    .wb_ptc_rty_i_B      (wb_s2m_ptc_rty_B),
// PTC_G
    .wb_ptc_adr_o_G      (wb_m2s_ptc_adr_G),
    .wb_ptc_dat_o_G      (wb_m2s_ptc_dat_G),
    .wb_ptc_sel_o_G      (wb_m2s_ptc_sel_G),
    .wb_ptc_we_o_G        (wb_m2s_ptc_we_G),
    .wb_ptc_cyc_o_G      (wb_m2s_ptc_cyc_G),
    .wb_ptc_stb_o_G      (wb_m2s_ptc_stb_G),
    .wb_ptc_cti_o_G      (wb_m2s_ptc_cti_G),
    .wb_ptc_bte_o_G      (wb_m2s_ptc_bte_G),
    .wb_ptc_dat_i_G      (wb_s2m_ptc_dat_G),
    .wb_ptc_ack_i_G      (wb_s2m_ptc_ack_G),
    .wb_ptc_err_i_G      (wb_s2m_ptc_err_G),
    .wb_ptc_rty_i_G      (wb_s2m_ptc_rty_G),
// PTC_R
    .wb_ptc_adr_o_R      (wb_m2s_ptc_adr_R),
    .wb_ptc_dat_o_R      (wb_m2s_ptc_dat_R),
    .wb_ptc_sel_o_R      (wb_m2s_ptc_sel_R),
    .wb_ptc_we_o_R        (wb_m2s_ptc_we_R),
    .wb_ptc_cyc_o_R      (wb_m2s_ptc_cyc_R),
    .wb_ptc_stb_o_R      (wb_m2s_ptc_stb_R),
    .wb_ptc_cti_o_R      (wb_m2s_ptc_cti_R),
    .wb_ptc_bte_o_R      (wb_m2s_ptc_bte_R),
    .wb_ptc_dat_i_R      (wb_s2m_ptc_dat_R),
    .wb_ptc_ack_i_R      (wb_s2m_ptc_ack_R),
    .wb_ptc_err_i_R      (wb_s2m_ptc_err_R),
    .wb_ptc_rty_i_R      (wb_s2m_ptc_rty_R),
// SPI
    .wb_spi_accel_adr_o (wb_m2s_spi_accel_adr),
    .wb_spi_accel_dat_o (wb_m2s_spi_accel_dat),
    .wb_spi_accel_sel_o (wb_m2s_spi_accel_sel),
    .wb_spi_accel_we_o  (wb_m2s_spi_accel_we),
    .wb_spi_accel_cyc_o (wb_m2s_spi_accel_cyc),
    .wb_spi_accel_stb_o (wb_m2s_spi_accel_stb),
    .wb_spi_accel_cti_o (wb_m2s_spi_accel_cti),
    .wb_spi_accel_bte_o (wb_m2s_spi_accel_bte),
    .wb_spi_accel_dat_i (wb_s2m_spi_accel_dat),
    .wb_spi_accel_ack_i (wb_s2m_spi_accel_ack),
    .wb_spi_accel_err_i (wb_s2m_spi_accel_err),
    .wb_spi_accel_rty_i (wb_s2m_spi_accel_rty),

// periférico genérico
    .wb_per_adr_o      (wb_m2s_per_adr),
    .wb_per_dat_o      (wb_m2s_per_dat),
    .wb_per_sel_o      (wb_m2s_per_sel),
    .wb_per_we_o       (wb_m2s_per_we),
    .wb_per_cyc_o      (wb_m2s_per_cyc),
    .wb_per_stb_o      (wb_m2s_per_stb),
    .wb_per_dat_i      (wb_m2s_per_rdt),
    .wb_per_ack_i      (wb_m2s_per_ack));



