#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 91 - Construir um algoritmo que leia dois valores num�ricos inteiros e efetue a 
adi��o; caso o resultado seja maior 10, apresent�-lo.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, soma;
	printf("\n\n Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf(" Digite o 2� n�mero: ");
	scanf("%d",&num2);
	soma=num1+num2;
	if(soma>10){
		printf("  Soma: %d\n",soma);
	}
	printf("\n");
	system("Pause");
	return 0;
}

