#include<stdio.h>
int main(){
	int n1,n2;
	
	printf("Enter a number: ");
	scanf("%d",&n1);
	
	printf("Enter another number: ");
	scanf("%d",&n2);
	
    int max = n1>n2 ? n1 : n2;
    for(;;) {
    	if(max % n1 == 0 && max % n2 ==0) {
    		printf("%d",max);
    		break;
		}
		max++;
	}
	
}
