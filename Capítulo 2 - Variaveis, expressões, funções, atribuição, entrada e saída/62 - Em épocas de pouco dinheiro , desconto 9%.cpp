#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 62 - Em �pocas de pouco dinheiro , os comerciantes est�o procurandoaumentar suas  vendas oferecendo desconto.
Fa�a um algoritmo que possa entrar com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi de 9%
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float preco, npreco;
	printf("\n\n  Digite valor do produto: ");
	scanf("%f",&preco);
	npreco=preco*0.91;
	printf("  Pre�o com desconto: %.2f\n\n",npreco);
	system("Pause");
	return 0;
}

