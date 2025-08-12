/*check if it's weekday or weekend?*/
#include <stdio.h>

int main() {
    int day;
    
    printf("Enter a number");
    scanf("%d",&day);
    
    if(day>=1 && day<=5){
        puts("weekday");
    }
    else if (day == 6 || day == 7){
        puts("Weekend");
    }
    else puts("Invalid day");
        
    
    return 0;
}
