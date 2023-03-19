#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 38 - Ler um número real e imprimir a terça parte deste número.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num;
	printf("Entre com um número com ponto: \n");
	scanf("%f",&num);
	printf("A terça parte é: %.2f\n",num/3);
	system("Pause");
	return 0;
}

