#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10

/*402 criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10
 e escrever os elementos da diagonal principal ;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int N[tam][tam], l, c, t;
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			printf("Entre com elemento linha %d coluna %d: ",l+1,c+1);
			scanf("%d",&N[l][c]);
		}
	}	
	printf("\nDiagonal Principal\n");
	for(l=0; l<tam; l++){
		printf("N[%d][%d] = %d\n",l,l,N[l][l]);
		for(t=0; t<=l; t++){
			//printf("%d\n",t);
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
