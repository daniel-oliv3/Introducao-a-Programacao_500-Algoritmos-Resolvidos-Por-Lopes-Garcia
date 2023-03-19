#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//48 - Antes de o racionamento de energia ser decretado, quase ninguém falava em quilowatts; mais, agora todos incorporaram essa palavra em seu vocabulário.
//Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasto por uma residência e calcule, imprima.
//* o valor em reais de cada quilowatt
//* o valor em reais a ser pago
//* o novo valor a ser pago por essa residência com um desconto de 10%

int main()
{
	setlocale(LC_ALL, "portuguese");
	float sm, qtdade, preco, vp, vd;
	printf("Entre com o salário mínimo: \n");
	scanf("%f",&sm);
	printf("Entre com a quantidade em quilowatt: \n");
	scanf("%f",&qtdade);
	preco = sm/700;
	vp = vp*0.9;
	printf("Preço do quilowatt: %.2f\nValor a ser pago: %.2f\nValor com desconto: %.2f\n",preco,vp,vd);
	system("Pause");
	return 0;
}

