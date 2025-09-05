#include<stdio.h>
int main(){
	
	int num,mul,into;
	printf("Enter number: ");
	scanf("%d",&num);
	
	printf("Enter Multiple : ");
	scanf("%d",&mul);
	
	for(int i=1;i<=mul;i++){
		
		into = num*i;
		printf("%d ",into);
		
	}
	
	
}
