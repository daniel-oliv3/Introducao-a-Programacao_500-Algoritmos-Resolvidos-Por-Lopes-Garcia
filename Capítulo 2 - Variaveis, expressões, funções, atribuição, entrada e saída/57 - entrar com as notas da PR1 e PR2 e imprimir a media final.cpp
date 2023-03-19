#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 57 - entrar com as notas da PR1 e PR2 e imprimir a media final.
//trucada
//arredondada

int main()
{
	setlocale(LC_ALL, "portuguese");
	float pr1, pr2, mf;
	printf("Digite pr1: \n");
	scanf("%f",&pr1);
	printf("Digite pr2: \n");
	scanf("%f",&pr2);
	mf=(pr1+pr2)/2;
	printf("Media truncada: = %.2f\n",(mf-0.5)+0.001);
	printf("Média arredondada: = %.2f\n", mf+0.001);
	system("Pause");
	return 0;
}

