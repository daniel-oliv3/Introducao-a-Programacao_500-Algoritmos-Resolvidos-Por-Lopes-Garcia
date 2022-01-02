#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 97 - Entrar com um número e informar se ele é divisivel por 10, por 5, por 2 ou se não é divisivel por nenhum deles. */

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n\n  Digite um número: ");
	scanf("%d",&numero);
	if(numero % 10 == 0){
		printf("  Múltiplo de 10\n");
	}else{
		if(numero % 2 == 0){
			printf("  Múltiplo de 2\n");
		}else{
			if(numero % 5 == 0){
				printf("  Múltiplos de 5\n");
			}else{
				printf("  Não é multiplo de 2 nem de 5\n");
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

