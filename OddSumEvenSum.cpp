#include<stdio.h>
int main(){
	
	int n,es=0,os=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n!=0){
		int r = n%10;
		if(r%2==0){
			es+=r;
		
		}
		else os+=r;
		
	n/=10;
	}
	printf("Odd sum = %d",os);
	printf("Even sum = %d",es);
}
