#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// SOLU��O N�2
/* 82 - ler um n�mero e se ele for maior do que 20, ent�o imprimir a metade do n�mero*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite n�mero: ");
	scanf("%f",&numero);
	if(numero>20.){
		printf("  Metade: %.2f\n",numero/2);
	}
	printf("\n");
	system("Pause");
	return 0;
}

