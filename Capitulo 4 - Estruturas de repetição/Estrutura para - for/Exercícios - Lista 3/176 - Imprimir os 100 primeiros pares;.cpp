#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 176 - Imprimir os 100 primeiros pares;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=2; i<=200; i=i+2){
		printf("  %d  \n",i);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
