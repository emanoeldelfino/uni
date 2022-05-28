/* Crie um programa que concatene duas strings com ponteiros */

#include <stdio.h>
#include <string.h>

void getInput(char *str, char *msg, int size);

int main(int argc, char *argv[]) {
    char str1[256], str2[256];

    getInput(str1, "String 1: ", 256);
    getInput(str2, "String 2: ", 256);


}

void getInput(char *str, char *msg, int size) {
    printf("%s", msg);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; // remover \n do final
}

