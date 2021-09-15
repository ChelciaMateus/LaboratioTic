#include <stdio.h>
int main()
{
	int soma,i; 
	for(i=1;i<500;i++)
	{
		if(i % 2 != 0){
			if(i%3==0 ){
				soma+= i;
				
			}	
	   	} 
	}
	printf("soma e:%d",soma);
	
	return 0;
}