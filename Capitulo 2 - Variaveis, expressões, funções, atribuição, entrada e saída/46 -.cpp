#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//46 - Faça um algoritmo que posa entrar com o saldo de uma aplicação e imprimir o novo saldo, considerando o reajuste de 1%.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float saldo, nsaldo;
	printf("Digite o saldo: \n");
	scanf("%f",&saldo);
	nsaldo = saldo*1.01;
	printf("Novo saldo: %.2f\n",nsaldo);
	system("Pause");
	return 0;
}

