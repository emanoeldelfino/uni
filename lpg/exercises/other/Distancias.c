#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float x1, x2, y1, y2, dis_euc, dis_man, dif_x, dif_y, preco_euc, preco_man;
	int horas, minutos;
	// (dis / 10) * 6
	// horario_pico -> 7 as 9, 12 a 13, 17 as 19 (+5)
	
	printf("Coordenadas do ponto 1 (x, y): ");
	scanf("%f %f", &x1, &y1);
	
	printf("Coordenadas do ponto 2 (x, y): ");
	scanf("%f %f", &x2, &y2);
	
	do {
		printf("Horário [hh:mm]: ");
		scanf("%d %*c %d", &horas, &minutos);
	} while (horas < 0 || horas > 24 || minutos > 59 || minutos < 0);

	dif_x = x1 - x2;
	dif_y = y1 - y2;
	
	dis_euc = sqrt(pow(dif_x, 2) + pow(dif_y, 2));
	dis_man = abs(dif_x) + abs(dif_y);
	
	preco_euc = (dis_euc / 10) * 6;
	preco_man = (dis_man / 10) * 6;

	if ((horas >= 7 && horas <= 9) || (horas == 12 && horas == 13) || (horas >= 17 && horas <= 19)) {
		preco_euc = preco_euc + 5;
		preco_man = preco_man + 5;
	}
	
	printf("\nDistancia Euclideana: %.2f.", dis_euc);
	printf("\nDistancia Manhattan: %.2f.", dis_man);
	printf("\n\nPreco da distancia Euclideana: R$ %.2f.", preco_euc);
	printf("\nPreco da distancia Manhattan: R$ %.2f.", preco_man);
	
	printf("\nO preco mais barato e o da distancia %s.", preco_euc < preco_man ? "Euclideana" : "Manhattan");
	
//	if (preco_euc < preco_man) {
//		printf("O preco mais barato e o da distancia Euclideana");
//	} else {
//		printf("O preco mais barato e o da distancia Manhattan")
//	}

	return 0;
}

