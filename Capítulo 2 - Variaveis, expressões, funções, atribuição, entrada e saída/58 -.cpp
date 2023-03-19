#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 58 - Entrar com valores para xnum1, xnum2, e xnum3 e imprimir o valor de x, sabendo-se que
x = xnum1 + xnum2 + 3(xnum1 - xnum2) + log 64  2
          xnum3 + xnum1*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float xnum1, xnum2, xnum3, x;
	printf("  Entre com o 1º valor: ");
	scanf("%f",&xnum1);
	printf("  Entre com o 2º valor: ");
	scanf("%f",&xnum2);
	printf("  Entre com o 3º valor: ");
	scanf("%f",&xnum3);
	x = xnum1+xnum2/(xnum3+xnum1)+2*(xnum1-xnum2)+long(64.)/long(2.);
	printf("  X = %.2f\n",x);
	system("Pause");
	return 0;
}

