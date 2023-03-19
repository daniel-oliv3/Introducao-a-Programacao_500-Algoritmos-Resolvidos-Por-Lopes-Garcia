#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 174 -  Imprimir todos os números de 1 até 100.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=1; i<=100; i++){
		printf("  %d\n",i);
	}	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
