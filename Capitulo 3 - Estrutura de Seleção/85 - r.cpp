#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 85 - 

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float a, b, c, max;
	printf("\n\n  Digite o 1º número: ");
	scanf("%f",&a);
	printf("\n\n  Digite o 2º número: ");
	scanf("%f",&b);
	printf("\n\n  Digite o 3º número: ");
	scanf("%f",&c);
	if(a > b){
		if(a > c){
			max=a;
		}else{
			max=c;
		}if(b > c){
				max=b;
			}else{
				max=c;
			}
		}
	printf(" %.2f\n",max);
	system("Pause");
	return 0;
}
			

