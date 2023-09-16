#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

// 53 - Entrar com os lados a, b,c de um paralelepipedo. calcular e imprimir a diagonal.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, diagonal;
	printf("Entre com a base: \n");
	scanf("%f",&a);
	printf("Entre com a altura: \n");
	scanf("%f",&b);
	printf("Entre com a profundidade: \n");
	scanf("%f",&c);
	diagonal=sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	printf("Diagonal: %.2f\n",diagonal);
	system("Pause");
	return 0;
}

