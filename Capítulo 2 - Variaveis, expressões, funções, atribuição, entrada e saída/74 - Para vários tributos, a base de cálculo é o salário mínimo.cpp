#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 74 - Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. Fazer um algoritmo que leia o valor do sal�rio minimo
e o valor do sal�rio de uma pessoa. Calcular e imprimir quantos sal�rios minimos ela ganha.
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salmin, salpe, num;
	printf("\n\n  Entre com o sal�rio m�nimo: ");
	scanf("%f",&salmin);
	printf("  Entre com sal�rio da pessoa: ");
	scanf("%f",&salpe);
	num=salpe/salmin;
	printf("  A pessoa ganha %.2f sal�rios m�nimos\n",num);	
	system("Pause");
	return 0;
}

