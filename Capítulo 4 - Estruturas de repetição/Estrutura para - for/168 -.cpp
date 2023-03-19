#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*   DIAGONAL PRINCIPAL
1-1
        2-2
                3-3
                        4-4
                                5-5
                                        6-6
                                                7-7
                                                        8-8
                                                                9-9
                                                                        10-10
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, l, t;
	printf("  DIAGONAL PRINCIPAL\n");
	for(l=1; l<=10; l++){
		printf("%d-%d\n",l,l);
		for(t=1; t<=l; t++){
			printf("\t");
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
