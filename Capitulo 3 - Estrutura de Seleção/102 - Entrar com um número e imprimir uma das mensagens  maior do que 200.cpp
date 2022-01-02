#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 102 - Entrar com um número e imprimir uma das mensagens: maior do que 20, igual a 20 ou menor do que 20.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite um número: ");
	scanf("%f",&numero);
	if(numero > 20){
		printf("  Maior que 20\n");
	}else{
		if(numero < 20){
			printf("  Menor que 20\n");
		}else{
			printf("  Igual a 20\n");
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

