#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 61 - Entrar com a raz�o de uma PG e o valor do 1� termo. 
Calcular e imprimir o 5� termo da s�rie.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int quinto, razao, termo;
	printf("\n\n  Entre com o 1� termo: ");
	scanf("%d",&termo);
	printf("  Entre com a raz�o: ");
	scanf("%d",&razao);
	quinto=termo*razao^4;
	printf("  O 5� termo desta P.G. �: %d\n",quinto); 
	system("Pause");
	return 0;
}

