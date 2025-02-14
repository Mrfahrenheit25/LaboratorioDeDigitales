# Definición de constantes
.equ STDOUT, 1

# Declaración de variables
.section .data
.align 3
.global a
a: .word 8

.align 3
.global b
b: .word 720

# Declaración de la función principal
.text
.global main
main:
# Lectura de los números a y b desde la entrada estándar
# asumiendo que se pasan como argumentos a la función

# Cargar a en a0
lw a0, a
# Cargar b en a1
lw a1, b

# Llamar a la función gcd
jal ra, gcd

# El resultado (MCD) está en a0
# Escribir el resultado a la salida estándar
mv a1, a0 # Mover el resultado a a1
li a0, STDOUT
ecall

# Salir del programa
li a0, 0
ret

# Definición de la función para calcular el MCD
gcd:
# Guardar el enlace de retorno
addi sp, sp, -4
sw ra, 0(sp)

# Comienza el algoritmo de Euclides
loop:
# Si a > b, Sacar resto a%b
bgt a0, a1, subtract
# Si b > a, Sacar resto b%a
rem a1, a1, a0
# Comparar b y 0
beq a1, zero, finish
j loop

subtract:
# Sacar resto a%b
rem a0, a0, a1
# Comparar a y 0
beq a0, zero, finish
j loop

finish:
# Si a > b, devolver a
bgt a0, a1, reta
# Si b > a devolver b
mv a0, a1
reta:
j end
# Fin del algoritmo
end:
# Restaurar el enlace de retorno
lw ra, 0(sp)
addi sp, sp, 4

# Devolver el resultado en a0
ret