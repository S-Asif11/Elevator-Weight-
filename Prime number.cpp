/*When a no is having only 2 factors then it is a prime

Or

The no divisible with 1 and itself only is a prime.*/

#include<stdio.h>
int main(){
	
	int n,count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Prime number");
	}
	else printf("Not a prime number");
}
