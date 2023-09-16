#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 34 - Ler um número inteiro e imprimir seu sucessor e seu antecessor

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero, suc, ant;
	printf("Entre com um número: \n");
	scanf("%d",&numero);
	ant = numero-1;
	suc = numero+1;
	printf("O sucessor é: %d\nO antecessor é: %d\n",suc,ant);
	system("Pause");
	return 0;
}

