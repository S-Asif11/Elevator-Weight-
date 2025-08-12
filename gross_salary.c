/*gross salary*/
#include <stdio.h>
 
int main() {
     int sales,basic = 10000,da,bonus,commission,gross;
    
    printf("enter sales amount :");
    scanf("%d",&sales);
    
    printf("Enter basic amount");
    scanf("%d",&basic);
   
    
    da=.65*basic;
    
    printf("da is = %d\n",da);
    
    if(sales>=100000) {
        bonus = 10000;
        commission = 0.10*sales;
    }
    
    if(sales < 100000){
        bonus = 2000;
        commission = 0.05*sales;
    }
    
    gross = basic+da+bonus+commission;
    
    printf("Gross salary is =%d",gross);
    
    

    return 0;
}
