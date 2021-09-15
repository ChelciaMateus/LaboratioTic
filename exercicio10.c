#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario_minimo,quantidade_quilowatt,quilowatt,valor_serpago,valor_serpago2,percentagem;
	
	printf("Digite o salário minímo e a quantidade de quilowatt consumida por uma residência: ");
	scanf("%f%f",&salario_minimo,&quantidade_quilowatt);
	
	quilowatt=salario_minimo /5;
	valor_serpago= quantidade_quilowatt* quilowatt;
	percentagem=(valor_serpago*15)/100;
	valor_serpago2=valor_serpago-percentagem;
	
	printf("O valor de cada quilowatt é %f\nO valor a ser pago por essa residência é %f\nO valor a ser pago por essa residência com desconto de 15%% é %f",quilowatt,valor_serpago,valor_serpago2);
	return 0;
}
	