#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 98 - A prefeitura do rio de janeiro abriu uma linha de cr�dito para funcion�rios estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. fazer um algoritmo 
que permita entrar com o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sb, vp;
	printf("\n\n Digite o sal�rio: ");
	scanf("%f",&sb);
	printf("  Digite o valor da presta��o: ");
	scanf("%f",&vp);
	if(vp <= 0.3*sb){
		printf("  Empr�stimo concedido!\n");
	}else{
		printf("  Empr�stimo negado!\n\a");
	}
	printf("\n");
	system("Pause");
	return 0;
}

