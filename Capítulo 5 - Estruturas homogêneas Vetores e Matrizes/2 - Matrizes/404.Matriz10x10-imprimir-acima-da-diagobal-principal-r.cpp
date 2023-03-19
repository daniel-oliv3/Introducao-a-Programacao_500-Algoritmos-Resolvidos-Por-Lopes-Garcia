#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 4

/* 404 Criar um algoritmo que leia os elementos de matriz 10x10 e escrever somente acima da diagonal principal.;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, c, t, m[tam][tam];
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Digite o %dº número: ",j+1);
			scanf("%d",&m[i][j]);
		}
	}
	system("cls");
	printf("Acima da Diagonal Principal\n");
	for(i=0; i<tam; i++){
		for(c=i+1; c<tam; c++){
			printf("M[%d][%d] = %d\t",i, j, m[i][j]);
		}
		printf("\n");
		for(t=0; t<=i; t++){
			printf("\t");
		}
	}
	printf("\n");
	system("Pause");
	return 0;
}

/**/
