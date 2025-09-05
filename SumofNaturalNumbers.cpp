#include<stdio.h>
int main(){
	int n,sum = 0;
	int i=1;
	printf("Enter a number :");
	scanf("%d",&n);
	while(i<=n){
		
		
		sum+=i;
		i++;
	}
	printf("%d",sum);
}
