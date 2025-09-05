/*Finding generic root of given no?
5677 ? 5+6+7+7=25 ? 2+5=7
1234 ? 1+2+3+4=10 ? 1+0 ? 1*/

#include<stdio.h>
int main(){
	
	int n,s=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n>9){
		
		for(s=0;n!=0;n=n/10){
			s+=n%10;
		}
		n=s;
	}
	printf("%d",n);
}
