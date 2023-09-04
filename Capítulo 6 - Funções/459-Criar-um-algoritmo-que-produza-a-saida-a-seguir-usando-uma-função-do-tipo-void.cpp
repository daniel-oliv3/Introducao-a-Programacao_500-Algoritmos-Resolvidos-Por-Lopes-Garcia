#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


/*459 - Criar um algoritmo que produza a saida a seguir, usando uma função do tipo void*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");

	
	printf("\n");
	for(int i=0; i<=12; i++){		
		printf("*");
	}
	printf("\nAnita Lopes\n");
	
	for(int i=0; i<=12; i++){		
		printf("*");
	}
	printf("\nGuto Garcia\n");
	
	
	for(int i=0; i<=12; i++){		
		printf("*");
	}
	printf("\n");
	
	
	linha();
	linha();
	system("Pause");
	return 0;
}


function void linha(){
	for(int i=0; i<=12; i++){		
		printf("*");
	}
}



/*
	Autor: Daniel Oliveira
	Email: danieloliveira.webmaster@gmail.com
	Manaus/Amazonas/Brasil
	19/03/2023
*/
