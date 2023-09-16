#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 25 - Entrar com a data no formato ddmmaa e imprimir: dia, mês, ano separados.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int data, dia, mes, ano;
	printf("Digite data no formato ddmmaa: \n");
	scanf("%d",&data);
	dia = data/10000;
	mes = data%10000/100;
	ano = data%100;
	printf("Dia: %d\n",dia); 
	printf("Mês: %d\n",mes); 
	printf("Ano: %d\n",ano); 
	system("Pause");
	return 0;
}

