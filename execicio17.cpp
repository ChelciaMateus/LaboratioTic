#include <stdio.h>
#include <locale.h>

int main(){
	int n1, fat;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	fat = n1;
	
	printf("\n%d! = %d ", n1, n1);
	for(int i =n1 - 1; i >= 1; i--){
		fat *= i;
		printf("x %d ", i);
	}
	
	printf("= %d\n", fat);
	
	return 0;
}