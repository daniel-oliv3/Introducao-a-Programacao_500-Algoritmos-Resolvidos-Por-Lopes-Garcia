#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//47 - Entrar com um n�mero no formato CDU e imprimir invertido: UDV. (exemplo: 123, sair� 321.)
//O n�mero dever� ser armazzenado em outra variavel antes de ser impresso.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, c, d, u, num1;
	printf("Entre com um n�mero de 3 d�gitos: \n");
	scanf("%d",&num);
	c = num/100;
	d = num%100/10;
	u = num%10;
	num1 = u*100+d*10+c;
	printf("N�mero: %d\n",num);
	printf("N�mero Invertido: %d\n",num1);
	system("Pause");
	return 0;
}

