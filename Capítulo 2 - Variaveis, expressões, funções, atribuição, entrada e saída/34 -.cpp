#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 34 - Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero, suc, ant;
	printf("Entre com um n�mero: \n");
	scanf("%d",&numero);
	ant = numero-1;
	suc = numero+1;
	printf("O sucessor �: %d\nO antecessor �: %d\n",suc,ant);
	system("Pause");
	return 0;
}

