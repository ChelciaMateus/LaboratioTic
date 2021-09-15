#include <stdio.h>
int main(int argc, char** argv[])
{
	float area, lado;
	printf("digite o valor do lado\n");
	scanf("%f",&lado);
	area=lado*lado;
	printf("a area é:%f",area);
	return 0;
}