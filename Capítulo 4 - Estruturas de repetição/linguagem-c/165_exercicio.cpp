#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a;
	printf("Zona1\n");
	for(a=1; a<=8; a++){
		printf("\t");
	}
	printf("Zona9\n");
	system("Pause");
	return 0;
}

/* voce ja pensou em fazer varias tabulaçoes usando a estrutura for, para 
1                                        63
zona1                                    zona2

?*/
