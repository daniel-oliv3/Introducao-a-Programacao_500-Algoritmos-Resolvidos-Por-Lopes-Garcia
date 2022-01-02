#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 35 - Ler nome, endereço e telefone e imprimi-los.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[30], endereco[30], telefone[30];
	printf("Entre com nome: \n");
	scanf("%s",&nome);
	printf("Entre com endereço: obs:(Use _ para separar as palavras)\n");
	scanf("%s",&endereco);
	printf("Entre com telefone: \n");
	scanf("%s",&telefone);
	printf("\n\n\n");
	printf("Nome: %s\n",nome);
	printf("Endereço: %s\n",endereco);
	printf("Telefone: %s\n",telefone);
	system("Pause");
	return 0;
}

