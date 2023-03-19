#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 74 - Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que leia o valor do salário minimo
e o valor do salário de uma pessoa. Calcular e imprimir quantos salários minimos ela ganha.
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salmin, salpe, num;
	printf("\n\n  Entre com o salário mínimo: ");
	scanf("%f",&salmin);
	printf("  Entre com salário da pessoa: ");
	scanf("%f",&salpe);
	num=salpe/salmin;
	printf("  A pessoa ganha %.2f salários mínimos\n",num);	
	system("Pause");
	return 0;
}

