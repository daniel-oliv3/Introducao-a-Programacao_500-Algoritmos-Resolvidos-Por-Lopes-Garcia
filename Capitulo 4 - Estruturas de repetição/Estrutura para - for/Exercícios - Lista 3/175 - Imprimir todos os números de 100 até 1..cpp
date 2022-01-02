#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 175 - Imprimir todos os números de 100 até 1.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=100; i>=1; i--){
		printf("  %d\n",i);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
