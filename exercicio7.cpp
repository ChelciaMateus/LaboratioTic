#include <stdio.h>
int main()
{
	int predf,percdld,percdm,Ld,Pi,Pf;
	printf("digite o preco,percentuallucro,percentualimp");
	scanf("%d%d%d",&predf,&percdld,&percdm);
	Ld=(predf*(percdld/100));
	Pi=(predf*(percdm/100));
	Pf=(predf+(Ld+Pi));
	printf("lucro de distribuidor e:%d valor do impoto e:%d preco do veiculo\n",Ld,Pi,Pf);
	return 0;
}