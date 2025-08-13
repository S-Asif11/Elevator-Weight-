#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the length of side1 :");
	scanf("%d",&a);
	
	printf("Enter the length of side2 :");
	scanf("%d",&b);
	
	printf("Enter the length of side3 :");
	scanf("%d",&c);
	
	if(a==b && b==c){
		printf("equilateral.");
	}
	else if (a==b && b!=c){
		printf("isosceles");
	}
	else printf("scalene");
}
