#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 93 - Entrar com um número e imprimir a raiz quadrada do número caso seja positivo e o
 quadrado do número caso ele seja negativo.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n\n  Digite um número: ");
	scanf("%f",&numero);
	if(numero > 0){
		printf("  Raiz: %.2f\n",sqrt(numero)); // raiz quadrada do número
	}else{
		if(numero < 0){
			printf("  Quadrado: %.2f\n",pow(numero,2));  // quadrado do número
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

