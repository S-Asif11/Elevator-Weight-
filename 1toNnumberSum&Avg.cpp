#include<stdio.h>
int main(){
	int n,i=1,s=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
	while(i<=n){
		
		s+=i;
		i++;
		
	}
	printf("%d %.2f",s,(float)s/n);
}
