#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 96 - Entrar com um número e informar se ele é divisivel por 3 e por 7.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n\n  Digite um número: ");
	scanf("%d",&numero);
	if(numero % 3 == 0 && numero % 7 == 0){  /* poderia testar (numero % 21 == 0) */
		printf("  Divisivel por 3 e por 7\n");
	}else{
		printf("  Não e divisivel por 3 e por 7\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

