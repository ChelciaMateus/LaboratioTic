#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float altura,menor_altura,maior_altura;
	
		
   	
	for(int i=1;i<=15;i++){
	 printf("Digite altura: ");
	scanf("%f%f",&menor_altura,&maior_altura);	
		if(i == 1){
		menor_altura = altura;
	   	maior_altura = altura;
		
		}
			if(altura < menor_altura){
				menor_altura = altura;
			}
			if(altura > maior_altura){
				maior_altura = altura;
			}
		

	}
		
          printf("A maior altura é: %f\nA menor altura é: %f",maior_altura,menor_altura);	
	
	return 0;
}
