// memory-mapped I/O addresses
# GPIO_SWs   = 0x80001400
# GPIO_LEDs  = 0x80001404
# GPIO_INOUT = 0x80001408

# Factorial de un número no negativo n

.section .data
n: .word 8 # Definimos n = 7 (el número para calcular su factorial)
fact: .word 1 # Inicializamos el factorial como 1

.text
.globl main
main:
# Cargar n en registro t0
lw t0, n

# Inicializar registro t1 como 1 (contador)
li t1, 1

# cargar el registro t1
lw t3, fact

li t4, 0x80001400   # base address of GPIO memory-mapped registers
li t5, 0xFFFF       # set direction of GPIOs
                    # upper half = switches (inputs)  (=0)
                    # lower half = outputs (LEDs)     (=1)
sw t5, 8(t4)        # GPIO_INOUT = 0xFFFF


loop:
# Multiplicar fact por t1 y almacenar el resultado en fact
mul t2, t1, t3
mv t3, t2

# Incrementar el contador t1
addi t1, t1, 1

# Comparar el contador con n
bne t1, t0, loop

# Imprimir el factorial
# Llamada al sistema para imprimir
# El número a imprimir debe estar en a0
mv a0, t3 # Cargar el factorial en a0
sw t3, 4(t4) # muestro en leds
li a7, 1 # Cargar el código de llamada para imprimir entero (1)
ecall # Realizar la llamada al sistema

# Terminar el programa
li a7, 10 # Cargar el código de llamada para terminar el programa (10)
ecall # Realizar la llamada al sistem