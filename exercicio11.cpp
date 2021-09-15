#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	float a, b, c, delta, raiz1, raiz2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite os valores de (a, b e c) de uma equação do segundo grau: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a == 0)
		printf("\nNão é uma equação do segundo grau\n");
	
	else
	{
		delta = pow(b, 2.0) - 4 * a * c;
		
		if(delta < 0)
			printf("Não existe um conjunto de raízes que satisfaz esta equação\n");
		
		else if(delta == 0){
			raiz1 = raiz2 = (- b + sqrt(delta)) / (2 * a);
			printf("\n A equação tem uma raiz (as duas raizes são iguais), esta raiz é igual a %.2f\n", raiz1);
		}
		
		else if(delta > 0){
			raiz1 = (- b + sqrt(delta)) / (2 * a);
			raiz2 = (- b - sqrt(delta)) / (2 * a);
			printf("\nAs raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
		}
	}	 
	
	return 0;
}