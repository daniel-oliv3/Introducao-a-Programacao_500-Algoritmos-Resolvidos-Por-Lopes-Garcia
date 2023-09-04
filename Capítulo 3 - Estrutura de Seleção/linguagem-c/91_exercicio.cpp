#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 91 - Construir um algoritmo que leia dois valores numéricos inteiros e efetue a 
adição; caso o resultado seja maior 10, apresentá-lo.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, soma;
	printf("\n\n Digite o 1º número: ");
	scanf("%d",&num1);
	printf(" Digite o 2º número: ");
	scanf("%d",&num2);
	soma=num1+num2;
	if(soma>10){
		printf("  Soma: %d\n",soma);
	}
	printf("\n");
	system("Pause");
	return 0;
}

