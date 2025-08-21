#include<stdio.h>
int main(){
	int base,power;
	long result=1;
	printf("Enter base : ");
	scanf("%d",&base);
	printf("Enter power :");
	scanf("%d",&power);
	
	while(power>=1){
		result = result * base;
		power--; 
		
	}
	printf("Final value is : %d",result);
}
