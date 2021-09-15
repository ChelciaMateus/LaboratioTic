#include <stdio.h>
int main(int argc, char** argv[])
{
	float chico = 1.50, juca = 1.10, altura_c = 0.02, altura_j = 0.03;
	int cont = 0;
	do
	{
		   chico += altura_c;
		   juca += altura_j;
		   cont++; 	
	}while(chico > juca);
	printf("serao precisos %d anos ",cont);
	return 0;
}