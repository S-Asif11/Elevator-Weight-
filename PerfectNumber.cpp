#include<stdio.h>
int main(){
	int n,f,sum;
	printf("Enter a number :");
	scanf("%d",&n);
	
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			f=i;
			sum=f+i;
		}
		
	}
	if(sum==n){
		printf("Its a perfect number");
	}
	else printf("Its not a perfect number");
	
}
