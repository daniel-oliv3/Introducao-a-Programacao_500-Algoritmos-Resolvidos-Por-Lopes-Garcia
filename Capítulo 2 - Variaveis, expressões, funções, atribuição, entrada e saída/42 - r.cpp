#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

// 42 - Entrar com um ângulo em graus e imprimir: seno, co-seno, tangente, secante, co-secante e co-tangente deste ângulo.

#define pi 3.14
int main()
{
	setlocale(LC_ALL, "portuguese");
	float angulo, rang;
	printf("Digite um angulo em graus: \n");
	scanf("%f",&angulo);
	rang = angulo*pi/180;
	printf("Seno: %.2f\n",seno(rang));
	printf("Co-seno: %.2f\n",cos(rang));
	printf("Tangente: %.2f\n",tam(rang));
	printf("Co-secante: %.2f\n",1/sen(rang));
	printf("Secante: %.2f\n",1/cos(rang));
	printf("Cotangente: %.2f\n",1/tan(rang));
	system("Pause");
	return 0;
}

