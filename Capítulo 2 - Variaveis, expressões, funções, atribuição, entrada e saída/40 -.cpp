#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 40 - Entrar com dois númeos inteiros e imprimir a seguinte saída, dividendo, divisor, quociente.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int quoc, rest, val1, val2;
	printf("Entre com o dividendo: \n");
	scanf("%d",&val1);
	printf("Entre com o divisor: \n");
	scanf("%d",&val2);
	quoc = val1/val2;
	rest = val1%val2;
	printf("Dividendo: %d\n",val1);
	printf("Divisor: %d\n",val2);
	printf("Quociente: %d\n",quoc);
	printf("Resto: %d\n",rest);
	system("Pause");
	return 0;
}

