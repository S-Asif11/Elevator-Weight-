#include<stdio.h>
int main(){
	int years;
	scanf("%d",&years);
	if(years<2){
		printf("not eligible for a bonus.");
	}
	else if (years>=2 && years<=4){
		printf("eligible for a 10%% bonus.");
	}
	else if (years>=5 && years <=9){
		printf("eligible for a 15%% bonus.");
	}
	else if(years>=10){
		printf("eligible for a 20%% bonus.");
	}
	else printf(" ");
	
}
