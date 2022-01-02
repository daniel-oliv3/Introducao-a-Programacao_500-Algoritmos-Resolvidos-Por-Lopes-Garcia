#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 103 - Entrar com o ano de nascimento de uma pessoa e o ano atual. Imprimir a idade da pessoa. não se esqueça de verificar
 se o ano de nascimento é um ano válido.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int anon, anoa;
	printf("\n\n  Entre com o ano atual: ");
	scanf("%d",&anoa);
	printf("\n\n  Entre com o ano de nascimento: ");
	scanf("%d",&anon);
	if(anon > anoa){
		printf("  Ano de nascimento invalido!\n\a");
	}else{
		printf("  Idade: %d\n",anoa-anon);
	}
	printf("\n");
	system("Pause");
	return 0;
}

