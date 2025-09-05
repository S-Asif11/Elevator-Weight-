/*print 1 to n table*/

#include<stdio.h>
int main(){
	int n,mul;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(int j=1;j<=n;j++){
		for(int i=1;i<=10;i++){
			mul=i*j;
			printf("%d * %d = %d\n",i,j,mul);
			
		}
		printf("\n");
		
	}
	
}
