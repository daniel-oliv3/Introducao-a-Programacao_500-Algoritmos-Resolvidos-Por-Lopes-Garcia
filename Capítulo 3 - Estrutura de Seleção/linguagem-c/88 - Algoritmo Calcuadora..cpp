#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 88 - Algoritmo Calcuadora.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char resp;
	float a, b;
	printf(".....................\n");
	printf("     CALCULADORA\n");
	printf(".....................\n\n");
	printf("  + para somar\n");
	printf("  - para subtrair\n");
	printf("  * para multiplicar\n");
	printf("  / para dividir\n");
	printf("\n    Digite a op��o: ");
	scanf("%s",&resp);
	if(resp=='+'){
		printf("\n\n  Digite 1� n�mero com ponto: ");
		scanf("%f",&a);
		printf("  Digite 2� n�mero com ponto: ");
		scanf("%f",&b);
		printf("  Soma: %.2f\n",a+b);
	}else{
		if(resp=='-'){
			printf("\n\n  Digite 1� n�mero com ponto: ");
			scanf("%f",&a);
			printf("  Digite 2� n�mero com ponto: ");
			scanf("%f",&b);
			printf("  Subtra��o: %.2f\n",a-b);
		}else{
			if(resp=='*'){
				printf("\n\n  Digite 1� n�mero com ponto: ");
				scanf("%f",&a);
				printf("  Digite 2� n�mero com ponto: ");
				scanf("%f",&b);
				printf("  Multiplica��o: %.2f\n",a*b);
			}else{
				if(resp=='/'){
					printf("\n\n  Digite 1� n�mero com ponto: ");
					scanf("%f",&a);
					printf("  Digite 2� n�mero com ponto: ");
					scanf("%f",&b);
					printf("  Divis�o: %.2f\n",a/b);
				}else{
					printf("  Op��o Inv�lida!\n\a");
				}
			}
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

