#include<stdio.h>
int main(){
	
	int N,i=1;
	
	scanf("%d",&N);
	
	if(N<=0){
		printf("Invalid");
	}
	s:
	if(i<=N){
		if(i%2!=0){
			printf("%d ",i);
		}
		i++;
		goto s;
	}
}
