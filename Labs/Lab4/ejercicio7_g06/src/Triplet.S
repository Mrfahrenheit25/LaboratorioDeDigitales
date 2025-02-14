.section .data
    .align 2
N:  .word 4
A:  .word 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12
B:  .space 16   # Reserva espacio para 4 enteros (N elementos)

    .section .text
    .globl main
main:
    la a1, A     # Carga la dirección de A en a1
    li t4, 0     # t0 es el índice i para el bucle for, inicializado a 0
    la t3, B     # t1 apunta al inicio del array B
    li t5, 0     # t0 es el índice i para el bucle for, inicializado a 0

loop:
    li a2, 3
    mul a2, a2, t5   # Calcula j = 3*i
    add a2, a1, a2   # a0 = dirección de A[j]
    jal ra, res_triplet  # Llama a res_triplet(A, j)

    # Guardar el resultado en B[i]
    sw a0, 0(t3)     # B[i] = valor retornado por res_triplet
    addi t3, t3, 4   # Incrementa el puntero de B
    addi t5, t5, 4   # Incrementa el puntero de B
    addi t4, t4, 1   # Incrementa i
    li t2, 4         # t2 = N
    blt t4, t2, loop # Si i < N, sigue en el bucle

    # Termina el programa
    li a7, 10        # Código de servicio para exit
    ecall            # Llama al sistema para terminar el programa

# Función para calcular el valor absoluto de la suma de tres elementos
res_triplet:
    add sp, sp, -32
    sw ra, 12(sp)
    # a0 = dirección base de V[pos]
    lw t0, 0(a2)    # t0 = V[pos]
    lw t1, 4(a2)    # t1 = V[pos+1]
    lw t2, 8(a2)    # t2 = V[pos+2]
    add t0, t0, t1
    add t0, t0, t2   # t0 = suma de los tres elementos

    mv a0, t0        # Prepara el argumento para la función abs
    jal ra, abs      # Llama a la función abs
    lw ra, 12(sp)
    add sp, sp, 32
    ret              # Retorna el resultado

# Función para calcular el valor absoluto de un número
abs:
    # a0 = x (el entero del que queremos el valor absoluto)
    bgez a0, abs_end # Si x >= 0, salta al final
    neg a0, a0       # Si x < 0, x = -x
abs_end:
    ret              # Retorna el valor absoluto