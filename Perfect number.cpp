/*perfect number
6=1+2+3|| 28=1+2+4+7+14*/

#include<stdio.h>
int main(){
	
	int n,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n/2;i++){
		
		if(n%i==0){
			sum+=i;
		}
		
	}
	if(n==sum){
		printf("Perfect number");
	}
	else printf("Not a perfect number");
}


