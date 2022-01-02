#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 98 - A prefeitura do rio de janeiro abriu uma linha de crédito para funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. fazer um algoritmo 
que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sb, vp;
	printf("\n\n Digite o salário: ");
	scanf("%f",&sb);
	printf("  Digite o valor da prestação: ");
	scanf("%f",&vp);
	if(vp <= 0.3*sb){
		printf("  Empréstimo concedido!\n");
	}else{
		printf("  Empréstimo negado!\n\a");
	}
	printf("\n");
	system("Pause");
	return 0;
}

