//n=10 ? 1 2 3 9 4 5 6 18 7 8 9 27 10

#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		printf(" %d",i);
		if(i%3==0){
			printf(" %d",i*3);
		}
	}
}

