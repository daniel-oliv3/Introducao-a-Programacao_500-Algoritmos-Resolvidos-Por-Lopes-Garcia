#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 37 - Ler dois n�meros inteiros e imprimir o produto.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, prod;
	printf("Entre com um n�mero: \n");
	scanf("%d",&num1);
	printf("Entre com outro n�mero: \n");
	scanf("%d",&num2);
	prod = num1*num2;
	printf("Produto: %d\n",prod);
	system("Pause");
	return 0;
}

