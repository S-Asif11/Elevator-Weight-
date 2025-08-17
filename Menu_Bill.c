#include<stdio.h>
int main(){
	
	int op,qty,bill;
	
	puts("----------------------------------\n");
	puts("HOTEL SAI BALAJI\n");
	puts("AMEERPET - HYD\n");
	puts("-----------------------------------\n");
	puts("M E N U\n");
	puts("----------------------------------\n");
	puts("1.Tea = 10/-\n");
	puts("2.Tea = 20/-\n");
	puts("3.Tea = 30/-\n");
	puts("4.Tea = 40/-\n");
	puts("5.Tea = 50/-\n");
	puts("6.Bill\n");
	puts("7.Cancel\n");
	puts("8.Close\n");
	
	printf("Enter your choice: ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1: printf("Enter how many? : ");
		scanf("%d",&qty);
		bill = 10*qty;
		printf("Your bill is %d",bill);
		break;
		
		case 2: printf("Enter how many? : ");
		scanf("%d",&qty);
		bill = 20*qty;
		printf("Your bill is %d",bill);
		break;
		
		case 3: printf("Enter how many? : ");
		scanf("%d",&qty);
		bill = 30*qty;
		printf("Your bill is %d",bill);
		break;
		
		case 4: printf("Enter how many? : ");
		scanf("%d",&qty);
		bill = 40*qty;
		printf("Your bill is %d",bill);
		break;
		
		case 5: printf("Enter how many? : ");
		scanf("%d",&qty);
		bill = 50*qty;
		printf("Your bill is %d",bill);
		break;
		
		case 6: printf("No item selected,Your bill is 0/- ");
		break;
		
		
		case 7: printf("Cancell button pressed.Order cancelled ");
		break;
		
		
		case 8: printf("Closed");
		break;
		default : printf("Invalid option chosed");
		break;
		
	}
	
	
	
}
