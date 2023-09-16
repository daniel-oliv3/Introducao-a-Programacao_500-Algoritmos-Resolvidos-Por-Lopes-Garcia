#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 30 - Criar um algoritmo que imprima o produto entre 28 e 43.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int produto;
	produto = 28*43;
	printf("O produto entre os dois é: %d\n",produto);
	system("Pause");
	return 0;
}

