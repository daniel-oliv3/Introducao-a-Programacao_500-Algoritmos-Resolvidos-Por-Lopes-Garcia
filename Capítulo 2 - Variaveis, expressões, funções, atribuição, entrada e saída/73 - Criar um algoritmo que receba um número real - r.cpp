#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 73 - Criar um algoritmo que receba um número real, calcular e imprimir;
- a parte inteira do número;
- a parte fracionária do número;
- o número arrendondado;
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num, numfrac;
	int numi, numa;
	printf("  Entre com um número com parte fracionária: ");
	scanf("%f",&num);
	numi=(float)num-0.5; 
	numfrac=num-numi;
	numa=float(num+0.00001);
	printf("  Parte inteira: %.2f\n",numi);
	printf("  Parte fracionária: %.2f\n",numfrac);
	printf("  Número arrendondado: %.2f\n",numa);
	system("Pause");
	return 0;
}

