#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 61 - Entrar com a razão de uma PG e o valor do 1º termo. 
Calcular e imprimir o 5º termo da série.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int quinto, razao, termo;
	printf("\n\n  Entre com o 1º termo: ");
	scanf("%d",&termo);
	printf("  Entre com a razão: ");
	scanf("%d",&razao);
	quinto=termo*razao^4;
	printf("  O 5º termo desta P.G. é: %d\n",quinto); 
	system("Pause");
	return 0;
}

