#include<stdio.h>
int main(){
    int age,issueChoice,tire,vehicle;
    float bill;
    
    char ownerName[50],vehicleName[50];
    
    
    
    
    printf("Enter owner's name: ");
    scanf("%s",&ownerName);

    printf("Enter vehicle name: ");
    scanf("%s",&vehicleName);

    
    printf("Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
    scanf("%d", &vehicle);

    if(vehicle==2 || vehicle == 3 || vehicle== 4){
        printf("what is the age of this vehicle ? : ");
        scanf("%d",&age);
        
        
    	if(age>8){
        	printf("Enter 1 for a tire problem: \n");
        	printf("Enter 2 for a fuel problem: \n");
        	printf("Enter 3 for an engine issue: \n");
        	printf("Enter 4 for general services: \n");
        	printf("Enter your choice :");
        	scanf("%d",&issueChoice);
        	
        	if (issueChoice==1){
        		printf("How many tires are you facing issues with? ");
        		scanf("%d",&tire);
        		
        		bill = tire*400;        		
			}
			else if (issueChoice==2){
				bill = 1500;
			}
			else if(issueChoice==3){
				bill = 5000;
			}
			else if(issueChoice==4){
				bill = 1000;
			}else printf("Invalid");
        	
        	
        	printf("\n----- Bill Format -----\n");
            printf("Name of the owner: %s\n", ownerName);
            printf("Name of the bike: %s\n", vehicleName);
            if(issueChoice == 1){
            	printf("Issue : Tire Problem\n");
			}
			else if (issueChoice == 2){
				printf("Issue : fuel problem\n");
			}
			else if (issueChoice == 3){
				printf("Issue : Engine problem\n");
			}
			else if(issueChoice == 4){
				printf("Issue :  general services\n");
			}
			else printf("Invalid");
			printf("Bill = %.2f",bill); 
            
        }else printf("Invalid");
        
        
        
        
    }
    else printf("This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers.");
}
