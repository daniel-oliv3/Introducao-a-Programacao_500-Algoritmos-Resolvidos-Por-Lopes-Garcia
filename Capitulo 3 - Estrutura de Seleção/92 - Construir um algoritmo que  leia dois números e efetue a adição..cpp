#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 92 - Construir um algoritmo que  leia dois números e efetue a adição. Caso o valor somado seja maior que 20, 
este devera ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, 
 este deverá ser apresentado subtrando-se 5.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num1, num2, soma;
	printf("\n\n  Digite o 1º número: ");
	scanf("%f",&num1);
	printf("  Digite o 2º número: ");
	scanf("%f",&num2);
	soma=num1+num2;
	if(soma>20){
		printf("  Soma: %.2f\n",soma+8);
	}else{
		printf("  Soma: %.2f\n",soma-5);
	}
	printf("\n");
	system("Pause");
	return 0;
}

