//Fibonacci series:
//n=5 ? 0 1 1 2 3
#include<stdio.h>
int main(){
	int n,f1=0,f2=1,f3;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf(" %d",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}
