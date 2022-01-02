#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 90 - Entrar com um número e imprimi-lo caso seja maior que 20.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite um número: ");
	scanf("%f",&numero);
	if(numero>20){
		printf("  %.2f\n",numero);
	}
	printf("\n");
	system("Pause");
	return 0;
}

