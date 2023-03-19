#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 86 - Ler um número e imprimir se ele e positivo, negativo ou nulo. */

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num;
	printf("\n\n  Digite um número: ");
	scanf("%f",&num);
	if(num > 0.){
		printf("  Positivo!\n");
	}else{
		if(num < 0.){
			printf("  Negativo!\n");
		}else{
			printf("  Nulo!\n\a");
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

