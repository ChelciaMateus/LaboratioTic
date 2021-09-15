#include <stdio.h>
int main()
{
	int n, medp, medi,  contp, conti, somap,somai;
	for(int i=1;i<10;i++){
		printf("digite um n:");
		scanf("%i",&n);
		 if(n%2!=0){
	 		somai+=n;
	 		conti++;
		 }
		 if(n%2==0){
			 somap+=n;
			 contp++;
		 }	
	}
	printf("media de pare %d\nmedia de impares %d ", medp,medi);

	return 0;
}