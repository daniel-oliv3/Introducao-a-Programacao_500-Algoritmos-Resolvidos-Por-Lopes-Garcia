#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 38 - Ler um n�mero real e imprimir a ter�a parte deste n�mero.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num;
	printf("Entre com um n�mero com ponto: \n");
	scanf("%f",&num);
	printf("A ter�a parte �: %.2f\n",num/3);
	system("Pause");
	return 0;
}

