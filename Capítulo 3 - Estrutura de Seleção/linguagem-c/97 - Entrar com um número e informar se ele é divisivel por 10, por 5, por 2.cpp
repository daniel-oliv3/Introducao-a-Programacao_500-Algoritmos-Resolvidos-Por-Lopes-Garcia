#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 97 - Entrar com um n�mero e informar se ele � divisivel por 10, por 5, por 2 ou se n�o � divisivel por nenhum deles. */

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n\n  Digite um n�mero: ");
	scanf("%d",&numero);
	if(numero % 10 == 0){
		printf("  M�ltiplo de 10\n");
	}else{
		if(numero % 2 == 0){
			printf("  M�ltiplo de 2\n");
		}else{
			if(numero % 5 == 0){
				printf("  M�ltiplos de 5\n");
			}else{
				printf("  N�o � multiplo de 2 nem de 5\n");
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

