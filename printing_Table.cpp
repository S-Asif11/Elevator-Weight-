#include<stdio.h>
int main(){
	int n,table;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Table of %d is\n",n);
	
	for (int i=1;i<=10;i++){
		
		table = n*i;
		
		printf(" %d x %d = %d\n",n,i,table);
	}
	
//	"Table of %d is %d*%d=%d",n,n,i,table
	
}
