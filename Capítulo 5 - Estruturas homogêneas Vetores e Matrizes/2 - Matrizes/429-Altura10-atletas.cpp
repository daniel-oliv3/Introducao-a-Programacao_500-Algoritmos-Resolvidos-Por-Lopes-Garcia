#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 429 - Criar um algoritmo que possa armazenar as alturas de 10 atletas de 5 delega��es 
que participar�o dos jogos de ver�o. imprimir a maior altura de cada delega��o;*/

int main(){
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, d;
	float altura[5][10], aux;	
	char deleg[20], resp;
	for(i=0; i<5; i++){
		printf("Digite o nome do %d� pa�s: ",i+1);
		scanf("%s",&deleg[i]);
		for(j=0; j<10; j++){
			printf("Digite a altura do %d� atleta: ",j+1);
			scanf("%f",&altura[i][j]);
		}
	}
	for(i=0; i<9; i++){
		for(j=i+1; j<10; j++){
			if(altura[d][i]<altura[d][j]){
				aux=altura[d][i];
				altura[d][i]=altura[d][j];
				altura[d][j]=aux;
			}
		}
	}
	printf("Rela��es dos altletas mais altos por delega��o\n");
	for(i=0; i<5; i++){
		printf("%s - %.2f\n",deleg[i],altura[i][0]);
	}
	system("Pause");
	return 0;
}

/**/
