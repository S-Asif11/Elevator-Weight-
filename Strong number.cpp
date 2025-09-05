/*finding strong number or not
145=> 1!+4!+5!



need explaination*/




#include<stdio.h>
int main(){
	
	int n,r,f=1,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for ( ;n!=0;n=n/10){
		
		r=n%10;
		sum+=f;
		for( ;r>0;r--){
			
			f=f*r;
			sum+=f;
		}
	}
	if (sum==n){
		printf("Strong number");
	}
	else printf("Weak number");
}

