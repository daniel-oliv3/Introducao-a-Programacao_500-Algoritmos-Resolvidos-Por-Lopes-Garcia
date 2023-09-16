#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 63  Criar um algoritmo que efetue o c�lculo do sal�rio l�quido de um professor. os dados fornecidos ser�o:
- valor da hora aula;
- n�mero de aulas dadas no m�s;
- percentual de desconto do INSS;
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int na;
	float vha, pd, td, sb, sl;
	printf("\n\n  Horas trabalhadas: ");
	scanf("%d",&na);
	printf("  Valor da hora-aula: ");
	scanf("%f",&vha);
	printf("  Percentual de desconto: ");
	scanf("%f",&pd);
	sb=na*vha;  // sb recebe horas trabalhadas vezes valor da hora-aula; 	
	td=(pd/100)*sb;  //td recebe (percentual de desconto / dividido por 100) vezes sb;
	sl=sb-td;  // sl recebe sb menos td;
	printf("  Sal�rio l�quido: %.2f\n",sl);
	system("Pause");
	return 0;
}

