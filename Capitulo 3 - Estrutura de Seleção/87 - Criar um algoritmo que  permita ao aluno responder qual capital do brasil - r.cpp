#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 87 - Criar um algoritmo que  permita ao aluno responder qual capital do brasil. 
todas as possibilidades dever�o ser pensadas.*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char resp[100];
	printf("  Qual a capital do brasil ?: ");
	scanf("%s",&resp);
	if(resp=="BRASILIA" || resp=="brasilia"){
		printf("  Parab�ns!\n");
	}else{
		if(resp=="brasilia" || resp=="BRASILIA" || resp=="Brazilia" || resp=="brazilia"){
			printf("  Certo! Mais aten��o para grafia: Bras�lia ou BRAS�LIA\n");
		}else{
			printf("  Errado! Estude mais!\n");
		}
			
	}
	
	
	system("Pause");
	return 0;
}

