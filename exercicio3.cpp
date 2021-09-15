#include <stdio.h>
int main()
{
	int anoactual,anonascimento,idade,novaidade;
	printf("digite o ano actual e nascimento");
	scanf("%i%i",&anoactual,&anonascimento);
	idade=anoactual-anonascimento;
	printf("a idade e:%i\n",idade);
	novaidade=2050-anoactual;
	printf("novaidade e :%i\n",novaidade);
	
	
	
	return 0;
}