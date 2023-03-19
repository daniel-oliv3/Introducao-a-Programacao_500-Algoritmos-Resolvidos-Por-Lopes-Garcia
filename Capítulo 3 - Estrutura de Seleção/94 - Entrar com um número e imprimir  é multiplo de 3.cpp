#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 94 - Entrar com um número e imprimir uma das mensagens: é multiplo de 3 ou não é multiplo de 3.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n\n  Digite um número: ");
	scanf("%d",&numero);
	if(numero % 3 == 0){
		printf("  Multiplo de 3\n");
	}else{
		printf("  Não e multiplo de 3\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

