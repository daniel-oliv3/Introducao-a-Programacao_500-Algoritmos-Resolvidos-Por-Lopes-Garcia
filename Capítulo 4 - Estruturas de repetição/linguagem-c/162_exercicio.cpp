#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 162 - Criar um algoritmo que imprima todos os números pares no intervalo 1-10;
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c;
	for(c=2; c<=10; c=c+2){
		printf("  %d\n",c);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
