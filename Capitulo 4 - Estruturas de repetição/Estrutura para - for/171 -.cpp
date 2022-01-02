#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*   DIAGONAL SECUNDARIA
                                                                        1-10
                                                                2-9
                                                        3-8
                                                4-7
                                        5-6
                                6-5
                        7-4
                8-3
        9-2
10-1
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int l, c, t;
	printf("  DIAGONAL SECUNDARIA\n");
	for(l=1; l<=10; l++){
		for(t=10-l; t>=1; t--){
			printf("\t");
		}
		printf("%d-%d\n",l,11-l);
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
