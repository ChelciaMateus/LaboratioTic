#include<stdio.h>
int main()
{
	float preco,custo,quanconvites;
	printf("digite custo e o preco ");
	scanf("%f%f",&custo,&preco);
	quanconvites=custo/preco;
	printf("quanconvites e:%f",quanconvites);
	
	
	
	return 0;
}