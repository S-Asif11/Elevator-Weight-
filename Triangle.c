#include<stdio.h>
int main(){
	int a,b,c;
	
	scanf("%d",&a);
	
	
	scanf("%d",&b);
	
	
	scanf("%d",&c);
	
	if ((a+b>c) && (b+c>a) && (c+a>b)){
		if (a==b && a==c){
			printf("The triangle is an equilateral triangle.");
		}
		else if (a==b || b==c || c==a){
			printf("The triangle is an isosceles triangle.");
		}
		else printf("The triangle is a scalene triangle.");
	}
	else printf("The lengths do not form a valid triangle.");
}
