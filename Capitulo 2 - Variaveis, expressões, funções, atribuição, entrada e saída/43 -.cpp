#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

// 43 Entrar com número e imprimir o logoritmo desse número na base 10;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num, logaritmo;
	printf("Entre com o logaritmo: \n");
	scanf("%f",&num);
	logaritmo = log(num)/log(10);
	printf("Logaritmo: %.2f\n",logaritmo);
	system("Pause");
	return 0;
}

