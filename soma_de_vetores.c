//Calcular soma de 2 vetores
#include <stdio.h>
typedef struct coord {
	float x;
	float y;
	float z;
} DADOS;
void preenche(DADOS *ponto);
void soma_vet(DADOS pontoA, DADOS pontoB, DADOS *soma);
int main() {
	DADOS pontoA, pontoB, soma;
	printf("Ponto A:");
	preenche(&pontoA);
	printf("\nPonto B:");
	preenche(&pontoB);
	printf("\nOs pontos são:\nPonto A: (%.1f,%.1f,%.1f)\nPonto B: (%.1f,%.1f,%.1f)", pontoA.x,pontoA.y,pontoA.z,pontoB.x,pontoB.y,pontoB.z);
	soma_vet(pontoA, pontoB, &soma);
	printf("\nA soma dos pontos é: (%.1f,%.1f,%.1f)", soma.x, soma.y, soma.z);
	return 0;
}

void preenche(DADOS *ponto) {
	printf("\nDigite o valor de X: ");
	scanf("%f", &(*ponto).x);
	printf("Digite o valor de Y: ");
	scanf("%f", &(*ponto).y);
	printf("Digite o valor de Z: ");
	scanf("%f", &(*ponto).z);
}

void soma_vet(DADOS pontoA, DADOS pontoB, DADOS *soma) {
	(*soma).x = pontoA.x + pontoB.x;
	(*soma).y = pontoA.y + pontoB.y;
	(*soma).z = pontoA.z + pontoB.z;
}

