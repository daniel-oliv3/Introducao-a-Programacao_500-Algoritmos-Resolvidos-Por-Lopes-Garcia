#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

// 50 - Entrar com a base e a altura de um retângulo e imprimir a seguinte saida, perimetro, area, diagonal.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float perimetro, area, diagonal, base, altura;
	printf("Digite base: \n");
	scanf("%f",&base);
	printf("Digite altura: \n");
	scanf("%f",&altura);
	perimetro = 2*(base+altura);
	area = base*altura;
	diagonal = sqrt(base*2 + altura*2);
	printf("Perimetro: %.2f\n",perimetro);
	printf("Área: %.2f\n",area);
	printf("Diagonal: %.2f\n",diagonal);
	system("Pause");
	return 0;
}

