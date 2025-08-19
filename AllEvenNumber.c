#include<stdio.h>
int main(){
	
	int num,i=1;
	
	scanf("%d",&num);
	
	if(num<=0){
		puts("Invalid Input");
		return 0;
		
	}
	s :
	if(i<=num){
		if(i%2==0){
			printf("%d ",i);
		}
		i++;
		goto s;

		
	}
}
