#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

//45 -  Entrar com um número e imprimir a seguinte saída: numero, quadrado, raiz quadrada.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num, quad, raizquad;
	printf("Digite um número: \n");
	scanf("%f",&num);
	quad = pow(num,2); // variavel resultado, recebe o numero e eleva a 2.
	raizquad = sqrt(num); //variavel raiz, recebe o valor da raiz quadrada do número.
	printf("Número: %.2f\n",num);
	printf("Quadrado: %.2f\n",quad);
	printf("Raiz Quadrada: %.2f\n",raizquad);
	system("Pause");
	return 0;
}

