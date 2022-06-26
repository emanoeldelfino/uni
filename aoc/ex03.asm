	.data
 		texto: .asciiz "Digite um número para ver o enésimo valor de Fibonacci: "
 	.text
	.globl main
main:
  	# entrada
	li $v0, 4
	la $a0, texto
	syscall

  	# ler o enésimo valor de fibonacci
  	li $v0, 5
  	syscall

  	# guardando a entrada em $s1
  	addi $s1, $v0, 0 # $s1 = $sv0

  	li $s3, 0 # guarda o penúltimo valor do fibonacci
  	li $s4, 1 # guarda o último valor do fibonacci
 	
 	# loop
  	for: 
    		add $s5, $s3, $s4 # fazer o resultado da soma dos dois últimos valores de fibonacci
    		addi $s4, $s3, 0 # $s4 = $s3
    		addi $s3, $s5, 0 # $s3 = $s5
    	beqz $s1, print
    		addi $s1, $s1, -1
  	j for
print:
	# resposta
	li $v0, 1
	# addi $a0, $s5, 0
	move $a0, $s5
	syscall
end:
	li $v0, 10 
	syscall
