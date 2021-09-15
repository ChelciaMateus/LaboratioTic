#include <stdio.h>
int main()
{
	char nome[30];
	float cot_cliente,total=0,tot=0;
	int dias, q,i=0;
	
		printf("digite a quatidade de quartos");
		scanf("%d",&q);
		
		if(q<=30){
			
	
	
		for(i=0;i<q;i++){	
		printf("digite nome do cliente e quanto dias ficara hospedado");
		scanf("%s%d",&nome[i],&dias);
		if(dias < 15){
			
			total=(dias*50)+(dias*4.0);	
			 printf("Nome: %s\n total conta:%.1f\n",nome,total);
		
		}
		else if(dias == 15)
		{
			 total=(dias*50)+(dias*3.6);	
			  printf("Nome: %s\n total conta:%.1f\n",nome,total);
		
			
		}
		else		
		{
			 total=(dias*50)+(dias*3.0);	
			  printf("Nome: %s\n total conta:%.1f\n",nome,total);
		
		}
	
		tot+=total;	
		}
		}
	
		printf("O total de renda do hotel e :%.2f\n",tot); 
		
	
	     return 0;
}