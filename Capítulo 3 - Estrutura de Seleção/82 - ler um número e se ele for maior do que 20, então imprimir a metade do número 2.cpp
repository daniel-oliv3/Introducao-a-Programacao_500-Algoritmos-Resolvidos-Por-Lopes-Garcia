#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// SOLUÇÃO Nº2
/* 82 - ler um número e se ele for maior do que 20, então imprimir a metade do número*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite número: ");
	scanf("%f",&numero);
	if(numero>20.){
		printf("  Metade: %.2f\n",numero/2);
	}
	printf("\n");
	system("Pause");
	return 0;
}

