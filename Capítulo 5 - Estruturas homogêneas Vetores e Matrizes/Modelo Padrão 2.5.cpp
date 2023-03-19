#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 5

/* 405 - Criar um algoritmo que leia os elementos de matriz inteira 10x10 é imprimir 
a soma dos elementos que estão a cima da diagonal principal.;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, soma=0, ArrayB[tam][tam];
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&ArrayB[i][j]);
		}
	}
	for(i=0; i<tam; i++){
		for(j=i+1; j<tam; j++){
			soma=soma+ArrayB[i][j];
		}
	}
	printf("\n\tSoma dos elementos acima da diagonal principal: %d\n",soma);
	system("Pause");
	return 0;
}

/**/
