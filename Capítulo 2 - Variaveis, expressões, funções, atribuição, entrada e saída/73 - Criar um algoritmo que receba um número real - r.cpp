#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 73 - Criar um algoritmo que receba um n�mero real, calcular e imprimir;
- a parte inteira do n�mero;
- a parte fracion�ria do n�mero;
- o n�mero arrendondado;
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num, numfrac;
	int numi, numa;
	printf("  Entre com um n�mero com parte fracion�ria: ");
	scanf("%f",&num);
	numi=(float)num-0.5; 
	numfrac=num-numi;
	numa=float(num+0.00001);
	printf("  Parte inteira: %.2f\n",numi);
	printf("  Parte fracion�ria: %.2f\n",numfrac);
	printf("  N�mero arrendondado: %.2f\n",numa);
	system("Pause");
	return 0;
}

