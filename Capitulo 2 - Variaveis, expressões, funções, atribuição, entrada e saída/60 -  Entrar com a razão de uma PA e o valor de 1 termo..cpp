#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 60 -  Entrar com a raz�o de uma PA e o valor de 1� termo. calcule e imprimir o 10� termo da s�rie*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int dec, razao, termo;
	printf("\n\n  Entre com o 1� termo: ");
	scanf("%d",&termo);
	printf("  Entre com a raz�o: ");
	scanf("%d",&razao);
	dec=termo+9*razao;
	printf("  O 10� termo desta P.A �: %d\n",dec);
	system("Pause");
	return 0;
}

