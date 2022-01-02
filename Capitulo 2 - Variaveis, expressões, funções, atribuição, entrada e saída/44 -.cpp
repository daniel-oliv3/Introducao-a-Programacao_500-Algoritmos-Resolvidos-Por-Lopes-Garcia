#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

// 44 - Entrar com número e a base em que se deseja calcular o logaritmo desse número e imprimi-lo.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num, base, logaritmo;
	printf("Entre com o logaritmo: \n");
	scanf("%f",&num);
	printf("Entre com a base: \n");
	scanf("%f",&base);
	logaritmo = log(num) / log(base);
	printf("O logaritmo deb %.2f bna baseb %.2f be:b\n",num,base,logaritmo);
	system("Pause");
	return 0;
}

