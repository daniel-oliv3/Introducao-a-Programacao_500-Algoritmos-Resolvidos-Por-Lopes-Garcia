#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//41 - Entrar com quatro n�meros e imprimir a m�dia ponderada, sabendo-se que os pesos s�o respectivamente: 1, 2, 3, e 4.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a,b,c,d,mp;
	printf("Entre com o 1 n�mero: \n");
	scanf("%f",&a);
	printf("Entre com o 2 n�mero: \n");
	scanf("%f",&b);
	printf("Entre com o 3 n�mero: \n");
	scanf("%f",&c);
	printf("Entre com o 4 n�mero: \n");
	scanf("%f",&d);
	mp = (a*1 + b*2 + c*3 + d*4)/10; // media ponderada soma os valores 1,2,3,4 = 10 ai divide por /10
	printf("M�dia ponderada: %.2f\n",mp);
	system("Pause");
	return 0;
}

