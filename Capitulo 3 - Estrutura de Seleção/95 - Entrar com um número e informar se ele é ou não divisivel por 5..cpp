#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 95 - Entrar com um n�mero e informar se ele � ou n�o divisivel por 5.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n\n Digite um n�mero: ");
	scanf("%d",&numero);
	if(numero % 5 == 0){
		printf("  E divisivel por 5\n");
	}else{
		printf("  N�o e divisivel por 5\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

