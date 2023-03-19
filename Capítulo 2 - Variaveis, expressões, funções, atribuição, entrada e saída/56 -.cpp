#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//56 -Entrar com o nome e idade. imprimir saida: nome, idade.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[100];
	int idade;
	printf("Digite nome: \n");
	//scanf("%s",&nome);
	gets(nome);
	printf("Digite Idade; \n");
	scanf("%d",&idade);
	printf("Nome: %s\n",nome);
	printf("Idade: %d\n",idade);
	system("Pause");
	return 0;
}

