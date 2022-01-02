#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ACIMA DA DIAGONAL PRINCIPAL
        1-2     1-3     1-4     1-5     1-6     1-7     1-8     1-9     1-10
                2-3     2-4     2-5     2-6     2-7     2-8     2-9     2-10
                        3-4     3-5     3-6     3-7     3-8     3-9     3-10
                                4-5     4-6     4-7     4-8     4-9     4-10
                                        5-6     5-7     5-8     5-9     5-10
                                                6-7     6-8     6-9     6-10
                                                        7-8     7-9     7-10
                                                                8-9     8-10
                                                                        9-10
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, l, t;
	printf("  ACIMA DA DIAGONAL PRINCIPAL\n");
	for(l=1; l<=9; l++){
		for(c=l+1; c<=10; c++){
			printf("\t%d-%d",l,c);
		}
			printf("\n");
			for(t=1; t<=l; t++){
				printf("\t");
			}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
