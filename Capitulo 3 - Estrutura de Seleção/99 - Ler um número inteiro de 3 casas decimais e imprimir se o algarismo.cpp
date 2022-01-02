#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 99 - Ler um número inteiro de 3 casas decimais e imprimir se o algarismo da casa das centenas é par ou impar.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, c;
	printf("\n\n número de 3 algarismo: ");
	scanf("%d",&num);
	c=num/100;
	if(c % 2 == 0){
		printf("  O algarismo das centenas e par: %d\n",c);
	}else{
		printf("  O algarismo das centenas e impar: %d\n",c);
	}
	printf("\n");
	system("Pause");
	return 0;
}

