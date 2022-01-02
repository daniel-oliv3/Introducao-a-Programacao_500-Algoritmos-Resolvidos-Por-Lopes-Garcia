#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int voltaLagoa=1, abdominais;
	for(voltaLagoa=1; voltaLagoa<=3; voltaLagoa++){
		printf("  %dº Volta na lagoa\n",voltaLagoa);
		for(abdominais=1; abdominais<=5; abdominais++){
			printf("    %dº Abdominal\n",abdominais);
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
