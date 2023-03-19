#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//39 - Entrar com dois números reais e imprimir a média aritmédica com mensagem "média" antes do resultado.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	printf("Digite 1a nota: \n");
	scanf("%f",&nota1);
	printf("Digite 2a nota: \n");
	scanf("%f",&nota2);
	media = (nota1+nota2)/2;
	printf("Média: %.2f\n",media);
	system("Pause");
	return 0;
}

