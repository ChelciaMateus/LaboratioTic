#include <stdio.h>
int main()
{
	 int n, n1 = 0, n2 = 1, soma = 0;
	 printf("Digite o numero de teste:\n");
	 scanf("%d",&n);
	 printf("%d\n%d",n1,n2); 
	 for(int i = 1; i <= n; i++)
	 {
	 	soma = n1 + n2;
	 	n1 = n2;
	 	n2 = soma;
	 	printf("\n\%d\n",soma);
	 }
	return 0;
}