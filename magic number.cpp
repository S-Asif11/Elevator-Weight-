/*Finding magic no or not? If the generic root is 1 it is a
magic no*/

#include<stdio.h>
int main(){
	
	int n,s=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	while(n>9){
		
		for(s=0;n!=0;n=n/10){
			s+=n%10;
		}
		n=s;
	}
	if(n==1){
		printf("Magic Number");
	}
	else printf("Not a Magic Number");
}
