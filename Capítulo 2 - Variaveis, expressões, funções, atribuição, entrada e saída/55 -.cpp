#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 55 -  criar um algoritmo que calcule e imprima a �rea de um losango;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float diagmaior, diagmenor, area;
	printf("Medida da diagonal maior: \n");
	scanf("%f",&diagmaior);
	printf("Medida da diagonal menor: \n");
	scanf("%f",&diagmenor);
	area=(diagmaior*diagmenor)/2;
	printf("�rea: = %.2f\n",area);
	system("Pause");
	return 0;
}

