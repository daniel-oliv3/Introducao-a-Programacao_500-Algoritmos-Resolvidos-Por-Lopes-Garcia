#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 101 - Construir um algoritmo que indique se o n�mero digitado est� compreendido entre 20 e 90 ou n�o.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num;
	printf("\n\n  Digite um n�mero: ");
	scanf("%f",&num);
	if(num > 20 && num < 90){
		printf("  O n�mero est� na faixa de 20 a 90, exclusive\n");
	}else{
		printf("  O n�mero est� fora da faixa de 20 a 90\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

