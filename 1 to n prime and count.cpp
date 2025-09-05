/*Print 1..n prime and count.*/

#include<stdio.h>
int main(){
	int n,count=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		
		if(i%2==0){
			count++;
		}
	}
	printf("%d ",count);
}
