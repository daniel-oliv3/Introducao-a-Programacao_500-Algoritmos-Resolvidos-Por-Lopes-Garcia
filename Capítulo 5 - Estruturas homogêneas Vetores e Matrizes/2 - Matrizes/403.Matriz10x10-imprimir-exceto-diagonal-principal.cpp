#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* 403 - Criar um algoritmo que leia os elementos de uma matriz inteira 10x10 e escreva todos os elementos
exceto os elementos da diagonal principal.;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, n[tam][tam];
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&n[i][j]);
		}
	}
	system("cls");
	printf("\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i != j){  //exceto diagonal principal
				printf("N[%d][%d] = %d\n",i, j, n[i][j]);
			}
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}

/**/
