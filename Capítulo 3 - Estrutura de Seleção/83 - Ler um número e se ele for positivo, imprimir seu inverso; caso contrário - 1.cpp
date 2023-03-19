#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// SOLUÇÃO Nº1:
/* 83 - Ler um número e se ele for positivo, imprimir seu inverso; caso contrário, imprimir o valor absoluto do número*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, inverso, absoluto;
	printf("\n\n  Digite número: ");
	scanf("%f",&numero);
	if(numero>0.){
		inverso=1/numero;
		printf("  Inverso: %.2f\n",inverso);
	}else{
		absoluto=numero*-1;
		printf("  Absoluto: %.2f\n",absoluto);
	}
	printf("\n");
	system("Pause");
	return 0;
}

