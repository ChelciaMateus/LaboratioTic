#include<stdio.h>,
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float pesosaco,quantidade_1,quantidade_2, total;
	
		printf("Digite o peso do saco de ra��o e quantidade de ra��o do 1� gato e 2� gato: ");
	scanf("%f%f%f",&pesosaco,&quantidade_1,&quantidade_2);
	
	quantidade_1/=1000;
	quantidade_2/=1000;
	total= pesosaco- 5*(quantidade_1+quantidade_2);
	
	printf("Ap�s cinco dias restara %f ",total);
	return 0;
}
	