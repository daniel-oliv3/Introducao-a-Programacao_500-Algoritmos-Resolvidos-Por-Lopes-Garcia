#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ACIMA DA DIAGONAL SECUNDARIA
1-1     1-2     1-3     1-4     1-5     1-6     1-7     1-8     1-9
2-1     2-2     2-3     2-4     2-5     2-6     2-7     2-8
3-1     3-2     3-3     3-4     3-5     3-6     3-7
4-1     4-2     4-3     4-4     4-5     4-6
5-1     5-2     5-3     5-4     5-5
6-1     6-2     6-3     6-4
7-1     7-2     7-3
8-1     8-2
9-1
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int l, c, t;
	printf("ACIMA DA DIAGONAL SECUNDARIA\n");
	for(l=1; l<=9; l++){
		for(c=1; c<11-l; c++){
			printf("%d-%d\t",l,c);
		}
		printf("\n");
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
