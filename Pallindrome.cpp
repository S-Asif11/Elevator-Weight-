/*pallindrome number*/
#include<stdio.h>
int main(){
	
	int n,temp,rev,digit;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		
		temp=i;
		rev=0;
		for( ;temp>0;temp=temp/10){
			
			digit=temp%10;
			rev=(rev*10) + digit;
		}
		if(rev==i){
			printf("%d ",rev);
		}
		
	}
	
	
	
}
