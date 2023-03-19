#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 178 - Imprimir o quadrado dos números de 1 até 20;
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, r;
	for(c=1; c<=20; c++){
		r=pow(c, 2);
		printf("  %d\n",r);
	}	
	printf("\n");
	system("Pause");
	return 0;
}

/**/
