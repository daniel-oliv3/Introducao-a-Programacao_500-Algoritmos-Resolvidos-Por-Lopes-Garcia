#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 84 - Ler um n�mero e imprimir se ele � par ou impar */

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a;
	printf("\n\n  Digite n�mero: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("  Par\n");
	}else{
		printf("  Impar\n");
	}
	printf("\n");	
	system("Pause");
	return 0;
}

