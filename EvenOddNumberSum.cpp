#include<stdio.h>
int main(){
	int n,es=0,os=0;
	
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	while(n>=1){
		if(n%2==0){
			es = es + n;
		}
		else os = os+n;
		n--;
	}
	printf("Odd Sum = %d\n",os);
	printf("Even Sum = %d",es);
	
	
}
