#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 93 - Entrar com um n�mero e imprimir a raiz quadrada do n�mero caso seja positivo e o
 quadrado do n�mero caso ele seja negativo.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite um n�mero: ");
	scanf("%f",&numero);
	if(numero > 0){
		printf("  Raiz: %.2f\n",sqrt(numero)); // raiz quadrada do n�mero
	}else{
		if(numero < 0){
			printf("  Quadrado: %.2f\n",pow(numero,2));  // quadrado do n�mero
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

