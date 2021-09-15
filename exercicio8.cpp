#include <stdio.h>
int main()
{
	float salario_minimo, hora_trabalho, valor_hora_tralho, salario_bruto, imposto, salario_receber;
	printf("Digite o nuumero de hora de trabalho e o valor do salario minimo:\n");
	scanf("%f%f",&hora_trabalho,&salario_minimo);
	valor_hora_tralho=salario_minimo/2;
	salario_bruto=hora_trabalho*valor_hora_tralho;
	imposto=(salario_bruto*3)/100;
	salario_receber=salario_bruto-imposto;
	printf("valor_hora_tralhada e%f ",valor_hora_tralho);
	printf("salario bruto e: %f",salario_bruto);
	printf("impoto e :%f",imposto);printf("salario receber e:%f",salario_receber);
	return 0;
}