#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*   Abaixo da diagonal principal

2-1
3-1     3-2
4-1     4-2     4-3
5-1     5-2     5-3     5-4
6-1     6-2     6-3     6-4     6-5
7-1     7-2     7-3     7-4     7-5     7-6
8-1     8-2     8-3     8-4     8-5     8-6     8-7
9-1     9-2     9-3     9-4     9-5     9-6     9-7     9-8
10-1    10-2    10-3    10-4    10-5    10-6    10-7    10-8    10-9
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, t, l;
	printf("  Abaixo da diagonal principal\n");
	for(l=2; l<=10; l++){
		printf("\n");
		for(c=1; c<l; c++){
			printf("%d-%d\t",l,c);
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
