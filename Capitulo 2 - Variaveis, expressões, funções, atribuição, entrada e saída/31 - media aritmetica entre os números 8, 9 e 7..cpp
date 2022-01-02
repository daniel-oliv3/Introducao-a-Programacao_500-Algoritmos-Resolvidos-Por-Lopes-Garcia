#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 31 -  criar um programa que imprima a media aritmetica entre os números 8, 9 e 7.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float ma;
	ma = (8+9+7)/3;
	printf("A média aritmetica é: %.2f\n",ma);
	system("Pause");
	return 0;
}

