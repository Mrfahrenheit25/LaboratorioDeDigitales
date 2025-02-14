# Register addresses for SPI Peripheral
    #define SegEn_ADDR 0x80001038
    #define SegDig_ADDR 0x8000103c

    #define RPTC_CNTR 0x80001200
    #define RPTC_HRC 0x80001204
    #define RPTC_LRC 0x80001208
    #define RPTC_CTRL 0x8000120c

    #define SPCR 0x80001100
    #define SPSR 0x80001108
    #define SPDR 0x80001110
    #define SPER 0x80001118
    #define SPCS 0x80001120

    # Function: Initialize SPI peripheral
    # call: by call ra, spiInit
    # inputs: None
    # outputs: None
    # destroys: t0, t1
    spiInit:
    li t1, SPCR # control register
    li t0, 0x53 # 01010011 no ints, core enabled, reserved, controller, cpol=0, cha=0, clock divisor 11 for 4096
    sb t0, 0(t1)
    li t1, SPER # extension register
    li t0, 0x02 # int count 00 (7:6), clock divisor 10 (1:0) for 4096
    sb t0, 0(t1)
    ret

    # Function: Pull CS Line to either high or low - Provides quick calls spiCSUp and spiCSDown
    # call: by call ra, spiCS
    # inputs: CS status in a0 (0 is low, 1 is high)
    # outputs: None
    # destroys: t0
    spiCS:
    li t0, SPCS # CS register
    sb a0, 0(t0) # Send CS status
    ret
    spiCSUp:
    li a0, 0x00
    j spiCS
    spiCSDown:
    li a0, 0xFF
    j spiCS

    # Function: Send byte through SPI and get the peripheral data back
    # call: by call ra, spiSendGetData
    # inputs: data byte to send in a0
    # outputs: received data byte in a1
    # destroys: t0, t1
    spiSendGetData:
    internalSpiClearIF: # internal clear interrupt flag
    li t1, SPSR # status register
    lb t0, 0(t1) # clear SPIF by writing a 1 to bit 7
    ori t0,t0,0x80
    sb t0, 0(t1)
    internalSpiActualSend:
    li t0, SPDR # data register
    sb a0, 0(t0) # send the byte contained in a0 to spi
    internalSpiTestIF:
    li t1, SPSR # status register
    lb t0, 0(t1)
    andi t0, t0, 0x80
    li t1, 0x80
    bne t0,t1,internalSpiTestIF # loop while SPSR.bit7 == 0. (transmission in progress)
    internalSpiReadData:
    li t0, SPDR # data register
    lb a1, 0(t0) # read the message from SPI
    ret

    .globl main
    main:

    add sp, sp, -16
    sw s1, 0(sp)
    sw ra, 4(sp)
    # configuración de la pantalla 24
    li t3, SegEn_ADDR
    addi t4, zero, 0x24
    sw t4, 0(t3) 
    # habilitar el spi
    jal spiInit

    # Enable the accelerometer

    jal spiCSDown
    li a0,0x0A
    jal spiSendGetData
    li a0,0x2D # direccion
    jal spiSendGetData
    li a0,0x02
    jal spiSendGetData
    jal spiCSUp

    # Configure Timer

    li t1, 0xFFFFF
    li t2, RPTC_HRC
    sw t1, 0(t2) # guardar HRC
    sw t1, 4(t2) # guardar LRC
loop:
li s1, 0
    NewMeasurement:

    # Read X axis
    jal spiCSDown
    li a0, 0x0B
    jal spiSendGetData
    li a0, 0x08
    jal spiSendGetData
    li a0, 0xFF
    jal spiSendGetData
    jal spiCSUp

# correr los registros
    add a0, zero, a1
    sll s1,s1, 4
    add s1, s1, a0

    # Read Y axis
    jal spiCSDown
    li a0, 0x0B
    jal spiSendGetData
    li a0, 0x09  # direccion
    jal spiSendGetData
    li a0, 0xFF
    jal spiSendGetData
    jal spiCSUp

    # correr los registros
    add a0, zero, a1
    sll s1,s1, 8
    add s1, s1, a0

    # Read Z axis
    jal spiCSDown
    li a0, 0x0B
    jal spiSendGetData
    li a0, 0x0A  # direccion
    jal spiSendGetData
    li a0, 0xFF
    jal spiSendGetData
    jal spiCSUp

    # correr los registros
    add a0, zero, a1
    sll s1,s1, 12
    add s1, s1, a0

    # escribir en el registro de 7 segmentos
    li t1, SegDig_ADDR
    sw s1, 0(t1)

# volver al loop
j loop