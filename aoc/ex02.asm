	.data 
		err_msg: .asciiz "ERRO"
		new_line: .asciiz "\n"
	.text
	.globl main
main:
	li $s0, 0 # Soma
	li $s1, 0 # Quantidade de valores digitados
while:
	li $v0, 5
	syscall
	move $s2, $v0
	beq $s2, -1, print
	add $s0, $s0, $s2
	addi $s1, $s1, 1
	j while
print:
	li $v0, 1
	move $a0, $s0
	syscall
	
	li $v0, 4
	la $a0, new_line
    	syscall
	
	beqz $s0, err

	div $s3, $s0, $s1
	mflo $s3
	
	li $v0, 1
	move $a0, $s3
	syscall
	
	j end
err:
	li $v0, 4
	la $a0, err_msg
    	syscall
end:
	li $v0, 10	  # Código para encerrar o programa
	syscall 	  # encerra o programa