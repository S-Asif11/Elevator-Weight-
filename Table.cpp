#include<stdio.h>
int main(){
	int n,i=1,mul=1;
	
	printf("Enter a number :");
	scanf("%d",&n);
	
	while(i<=10){
		mul = n*i;
	 printf("%d X %d = %d\n",n,i,mul);
		i++;
	}

}
