//n = 5
//1^2 + 2^2 + 3^2 + 4^2 + 5^2

#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(int i = 1;i<=5;i++){
		sum = sum+(i*i);
	}
	printf("Square sum is %d",sum);
	
}
