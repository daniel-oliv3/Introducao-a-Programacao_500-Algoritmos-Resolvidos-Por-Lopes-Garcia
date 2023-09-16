#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//41 - Entrar com quatro números e imprimir a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3, e 4.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a,b,c,d,mp;
	printf("Entre com o 1 número: \n");
	scanf("%f",&a);
	printf("Entre com o 2 número: \n");
	scanf("%f",&b);
	printf("Entre com o 3 número: \n");
	scanf("%f",&c);
	printf("Entre com o 4 número: \n");
	scanf("%f",&d);
	mp = (a*1 + b*2 + c*3 + d*4)/10; // media ponderada soma os valores 1,2,3,4 = 10 ai divide por /10
	printf("Média ponderada: %.2f\n",mp);
	system("Pause");
	return 0;
}

