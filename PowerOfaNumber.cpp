#include<stdio.h>
int main(){
	int x,y,p=1;
	
	printf("Enter x: ");
	scanf("%d",&x);
	
	printf("Enter y: ");
	scanf("%d",&y);
	
	for (int i=1;i<=y;i++){
		
		p*=x;
	}
	printf("%d",p);
}
