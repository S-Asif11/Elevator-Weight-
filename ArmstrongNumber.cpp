#include<stdio.h>
int main(){
	int n,sq,el,l=0,sum=0;
	printf("Enter a number :");
	scanf("%d",&n); //153
	int t=n;
	while(t!=0)
	{
		l++; //3
		t=t/10;
	}
	
	t=n;
	
	while(t!=0)
	{
		int r=t%10;//5
		int x=1;
		int i=1;
		while(i<=l)
		{
			x=x*r;//27
			i++;
		}
		sum=sum+x;//27+125+1
		
		t=t/10; //15
	}
	
	if(sum==n){
		
	}
	
	

}
