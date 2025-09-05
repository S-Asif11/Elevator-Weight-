//n=5
//1+2+3+4+5=15

#include<stdio.h>
int main(){
	
	int n,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		printf("%d+",i);
		sum+=i;
		
	}
	printf("=%d",sum);
	
	
}
