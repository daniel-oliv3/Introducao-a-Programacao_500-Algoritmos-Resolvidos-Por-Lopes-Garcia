#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 60 -  Entrar com a razão de uma PA e o valor de 1º termo. calcule e imprimir o 10º termo da série*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int dec, razao, termo;
	printf("\n\n  Entre com o 1º termo: ");
	scanf("%d",&termo);
	printf("  Entre com a razão: ");
	scanf("%d",&razao);
	dec=termo+9*razao;
	printf("  O 10º termo desta P.A é: %d\n",dec);
	system("Pause");
	return 0;
}

