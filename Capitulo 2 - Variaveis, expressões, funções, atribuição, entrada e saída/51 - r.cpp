#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 51 - Entrar com o raio de um circulo e imprimir a seguinte saida,
//area, perimetro

int main()
{
	setlocale(LC_ALL, "portuguese");
	float raio, perimetro, area, pi=3.14;
	printf("Digite raio: \n");
	scanf("%f",&raio);
	perimetro = 2*pi*raio;
	area = pi*raio**2;
	printf("Perimetro: %.2f\n",perimetro);
	system("Pause");
	return 0;
}

