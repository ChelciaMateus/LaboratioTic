#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, unidade, dezena, centena, milhar, mil_milhares;
	printf("Digite um numero de 5 digitos:\n");
	scanf("%d",&n);
	unidade = ((n / 1) % 10);
	dezena = ((n / 10) % 10);
	centena = ((n / 100) % 10);
	milhar = ((n / 1000) % 10);
	mil_milhares = ((n / 10000) % 10);
	if(unidade == mil_milhares && dezena == milhar)
	{
		printf("O numero e Palindromo");
	}
	else
	{
		   printf("O numero nao e Palindromo");	
	}
	printf("\n A unidade e: %d",unidade);
	printf("\n A dezena e: %d",dezena);
	printf("\n A centena e: %d",centena);
	printf("\n O milhar e: %d",milhar);
	printf("\n O mil de milhares e: %d",mil_milhares);
	return 0;
}