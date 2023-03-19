#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

// 52 - Entrar com o lado de um quadrado e imprimir:
//perimetro;
//area;
//diagonal;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float lado, perimetro, area, diagonal;
	printf("Digite o lado do quadrado: \n");
	scanf("%f",&lado);
	perimetro=4*lado;
	area= pow(lado,2); 
	diagonal=pow(lado,2); 
	printf("Perimetro: %.2f\n",perimetro);	
	printf("área: %.2f\n",area);	
	printf("Diagonal: %.2f\n",diagonal);	
	system("Pause");
	return 0;
}
//exponencial=> a=pow(b,2);
