#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// SOLU��O N�2:
/* 83 - Ler um n�mero e se ele for positivo, imprimir seu inverso; caso contr�rio, imprimir o valor absoluto do n�mero*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, inverso, absoluto;
	printf("\n\n  Digite n�mero: ");
	scanf("%f",&numero);
	if(numero>0.){
		inverso=1/numero;
		printf("  Inverso: %.2f\n",inverso);
	}else{
		printf("  Absoluto: %.2f\n",numero*(-1));
	}
	printf("\n");
	system("Pause");
	return 0;
}

