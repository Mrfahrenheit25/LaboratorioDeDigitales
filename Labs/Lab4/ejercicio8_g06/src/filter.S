# Declaración de constantes
#define N 6

.section .data
    A:  .word 48, 64, 56, 80, 96, 48
    B:  .space N*4    # Espacio para B

.section .bss
    j:  .word 0       # Inicialización de j

.section .text
.globl _start

_start:
    # Inicialización de registros
    li a4, 0          # i = 0
    li a1, 0          # j = 0
    la a2, A          # Dirección de A
    la a3, B          # Dirección de B
    li t0, N-1        # N-1
    li t1, 16         # Constante 16

loop:
    # Cargar A[i] y A[i+1]
    lw t2, 0(a2)      # A[i]
    lw t3, 4(a2)      # A[i+1]

    # Llamar a la función myFilter
    mv a0, t2         # Argumento 1 (A[i])
    mv a1, t3         # Argumento 2 (A[i+1])
    jal ra, myFilter  # Llamar a myFilter

    # Comprobar el resultado de myFilter
    beqz a0, not_selected  # Salto si el resultado es 0

    # B[j] = A[i] + A[i+1] + 2
    add t4, t2, t3 # A[i] + A[i+1] + 2
    addi t4, t4, 2
    sw t4, 0(a3)       # Guardar en B[j]
    addi a1, a1, 1     # Incrementar j

not_selected:
    # Incrementar i
    addi a2, a2, 4
    addi a1, a1, 1
    blt a4, t0, loop   # Repetir si i < N-1

    # Terminar el programa
    li a7, 10          # Código de salida
    ecall

# Función myFilter
myFilter:
    li t0, 16          # Constante 16
    rem t1, a0, t0     # a0 % 16
    bnez t1, not_multiple # Salto si no es múltiplo de 16
    blt a1, a0, not_greater # Salto si a1 <= a0
    li a0, 1           # Devolver 1 (Verdadero)

    ret

not_greater:
    li a0, 0           # Devolver 0 (Falso)
    ret

not_multiple:
    li a0, 0           # Devolver 0 (Falso)
    ret