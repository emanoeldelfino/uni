/* 
Criar um programa que receba os três ângulos internos de um triângulo e determine o tipo 
de triângulo: equilátero, isósceles, escaleno ou retângulo.
*/

#include <stdio.h>

int main() {
    float angles[3] = {(float)0, (float)0, (float)0};
    float angles_sum;

    do {
        printf("Digite os tres angulos do triangulo: ");
        scanf("%f %f %f", &angles[0], &angles[1], &angles[2]);

        angles_sum = angles[0] + angles[1] + angles[2];
        if (angles[0] <= 0 || angles[1] <= 0 || angles[2] <= 0)  {
            printf("\nAngulo menor ou igual a zero invalido!");
        } else if (angles_sum != 180) {
            printf("\nA soma dos angulos do triangulo nao pode ser diferente de 180!");
        }
    } while (angles_sum != 180 || angles[0] <= 0 || angles[1] <= 0 || angles[2] <= 0);

    if (angles[0] == 90 || angles[1] == 90 || angles[2] == 90) {
        printf("Triangulo retangulo");
    } else if (angles[0] == angles[1] && angles[1] == angles[2]) {
        printf("Triangulo equilatero");
    } else if (angles[0] == angles[1] || angles[1] == angles[2] || angles[0] == angles[2]) {
        printf("Triangulo isosceles");
    } else {
        printf("Triangulo escaleno");
    }

    return 0;
}
