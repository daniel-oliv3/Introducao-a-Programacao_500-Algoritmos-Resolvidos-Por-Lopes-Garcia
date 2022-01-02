#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*89 - */

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int op;
	float pterra;
	printf("  Planetas que podem ser analisados\n\n");
	printf("  1 Mercurio\n");
	printf("  2 Venus\n");
	printf("  3 Marte\n");
	printf("  4 Jupiter\n");
	printf("  5 Saturno\n");
	printf("  6 Urano\n\n");
	printf("  Escolha o planeta a ser analisado: ");
	scanf("%d",&op);
	printf("  Entre com o peso da terra: ");
	scanf("%d",&pterra);
	switch(op){
		case 1:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*0.37);
			break;
		case 2:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*0.88);
			break;
		case 3:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*0.38);
			break;
		case 4:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*2.64);
			break;
		case 5:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*1.15);
			break;
		case 6:
			printf("  Seu peso no planeta terra é: %d\n",(pterra/10)*1.17);
			break;
		default:
			printf("  \nEste planeta não pode ser analisado!\n\a");						
	}
	printf("\n");
	system("Pause");
	return 0;
}

