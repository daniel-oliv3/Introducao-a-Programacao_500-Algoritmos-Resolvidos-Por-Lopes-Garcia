#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 54 - criar um algoritmo que calcule e imprima a area de um triangulo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b;
	printf("Entre com a base: \n");
	scanf("%f",&a);
	printf("Entre a altura do tri�ngulo: \n");
	scanf("%f",&b);
	printf("�rea = %.2f\n",(a*b)/2);
	system("Pause");
	return 0;
}

