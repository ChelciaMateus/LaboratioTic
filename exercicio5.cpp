#include <stdio.h>
int main()
{
	float salario,percentual,aumento,novosalario;
	printf("digite o salario e percentual de aumento:\n");
	scanf("%f%f",&salario,&percentual);
	aumento=(salario*percentual)/100;
	novosalario=salario+aumento;
	printf("aumento e:%f\n o novo salario e: %f",aumento, novosalario);
	return 0;
}