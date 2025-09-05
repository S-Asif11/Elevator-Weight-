/*Finding spy or not 
123-->1+2+3=6 or 1*2*3=6*/

#include<stdio.h>
int main(){
	int n,s1=0,s2=1,r;
	printf("Enter the number: ");
	scanf("%d",&n);
	
//	for(int i;n!=0;n/=10){
//		r=n%10;
//		s1+=r;
//		s2*=r;
//	}



	while(n!=0){
		r=n%10;
		n/=10;
		s1+=r;
		s2*=r;
		
		
	}
	if(s1==s2){
		printf("Spy number");
	}
	else printf("Not a Spy Number");
	
}
