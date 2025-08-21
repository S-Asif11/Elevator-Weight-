#include<stdio.h>
int main(){
	
	int n;
	long f=1; //using long because it has more range
	printf("Enter a number :");
	scanf("%d",&n);
	
	while(n>=1){
		f=f*n;
		n--;
	}
	printf("Factorial value is : %ld",f);
}
