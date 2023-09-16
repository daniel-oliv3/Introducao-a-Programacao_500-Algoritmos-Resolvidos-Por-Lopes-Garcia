#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//47 - Entrar com um número no formato CDU e imprimir invertido: UDV. (exemplo: 123, sairá 321.)
//O número deverá ser armazzenado em outra variavel antes de ser impresso.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, c, d, u, num1;
	printf("Entre com um número de 3 dígitos: \n");
	scanf("%d",&num);
	c = num/100;
	d = num%100/10;
	u = num%10;
	num1 = u*100+d*10+c;
	printf("Número: %d\n",num);
	printf("Número Invertido: %d\n",num1);
	system("Pause");
	return 0;
}

