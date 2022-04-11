/*
Elaborar um programa em C que declare 4 variáveis de tipos diferentes e duas constantes. 
utilize cada uma das sequências de escape \n, \t, \a, \\, \", além das 
funções printf e scanf.
Utilizar operadores aritméticos, <, >, % e uma fórmula com parênteses.

\n para quebrar qualquer linha ao apresentar o resultado.
\a ao pedir alguma entrada ao usuário
\t na resposta de alguma entrada de variável com um \\>
\" para colocar entre uma frase qualquer
*/

#include <stdio.h>
#include <math.h>

#define VARS 3
#define MAX 1000

int main() {
    char inp_str[7] = "\n\t\a\\> ";
    char abc_chars[VARS] = "ABC"; 
    int abc_nums[VARS], a, b, c;
    float delta;
    double x1, x2;

    int i;
    for (i = 0; i < VARS; i++) {
        do {
            printf("%c (menor que %d) %s", abc_chars[i], MAX, inp_str);
            scanf("%d", &abc_nums[i]);
            printf("Valor %sPAR!\n\n", abc_nums[i] % 2 ? "ÍM" : "");
        } while (abc_nums[i] > MAX);
    }
    a = abc_nums[0]; b = abc_nums[1]; c = abc_nums[2];

    delta = b * b - 4 * a * c;

    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("Não possui raízes reais!");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("x'/x\" = %.2lf", x1);
    } else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x' = %.2lf\nx\" = %.2lf", x1, x2);
    }
    printf("\n\n");
}

