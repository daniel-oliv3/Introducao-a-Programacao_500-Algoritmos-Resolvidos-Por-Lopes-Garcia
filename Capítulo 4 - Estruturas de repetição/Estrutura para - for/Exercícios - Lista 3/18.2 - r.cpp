#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 18) Receber um nome no teclado e imprimir a seguinte saída - Nome todo: - Primeiro caracter: -
Do primeiro até o terceiro caracter:
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, t;
	char nome[40];
	printf("  Digite um nome: ");
	gets(nome);
	t=strlen(nome);
	for(c=0; c<=nome; c++){
		
	}
	
	
	printf("\n  Nome completo: %s\n",(nome));
	printf("  Primeiro caracter: %s\n",(nome[0]));
	printf("  Segundo caracter: %s\n",(nome[1]));
	printf("  Terceiro caracter: %s\n",(nome[2]));
	
	system("Pause");
	return 0;
}

/**/
