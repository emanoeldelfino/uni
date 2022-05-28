/* Crie um programa que permita encontrar o comprimento de uma string utilizando ponteiros. */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str[256];
	char *startPtr;
	char *endPtr;
	
	printf("Digite um texto: ");
	fgets(str, 256, stdin);

    str[strcspn(str, "\n")] = 0; // remover \n do final
	
	startPtr = str;
	
	int i;
	for (i = 0; *(i + str) != 0; i++) {
		if ((i + 1)[str] == 0)
			endPtr = i + 1 + str; // sem \n
            //endPtr = i + str; // com \n
	}

    //int i = 0;
    //while (str[i] != '\0') {
    //    i++;
    //    if (str[i] == '\0')
    //        endPtr = &str[i];
    //}

	int sizeStr = endPtr - startPtr;
	printf("O tamanho da string eh %d.\n", sizeStr);
}

