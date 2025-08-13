/*90 to 100: Grade A
	-> 80 to 89: Grade B
	-> 70 to 79: Grade C
	-> 60 to 69: Grade D
	-> Below 60: Grade F
*/



#include<stdio.h>

int main(){
	
	int num;
	scanf("%d",&num);
	
	if(num>=90 && num<=100){
		printf("Grade A");
	}
	else if(num>=80 && num<=89){
		printf("Grade B");
	}
	else if (num>=70 && num<=79){
		printf("Grade C");
	}
	else if(num>=60 && num<=69){
		printf("Grade D");
	}
	else if(num<60){
		printf("Grade F");
	}
	else printf(" ");
}
