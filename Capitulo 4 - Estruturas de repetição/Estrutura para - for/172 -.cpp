#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ABAIXO DA DIAGONAL SECUNDÁRIA

                                                                2-10
                                                        3-9     3-10
                                                4-8     4-9     4-10
                                        5-7     5-8     5-9     5-10
                                6-6     6-7     6-8     6-9     6-10
                        7-5     7-6     7-7     7-8     7-9     7-10
                8-4     8-5     8-6     8-7     8-8     8-9     8-10
        9-3     9-4     9-5     9-6     9-7     9-8     9-9     9-10
10-2    10-3    10-4    10-5    10-6    10-7    10-8    10-9    10-10
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int l, c, t;
	printf("ABAIXO DA DIAGONAL SECUNDÁRIA\n");
	printf("\n");
	for(l=2; l<=10; l++){
		for(t=10-l; t>=1; t--){
			printf("\t");
		}
		for(c=12-l; c<=10; c++){
			printf("%d-%d\t",l,c);
		}
		printf("\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
