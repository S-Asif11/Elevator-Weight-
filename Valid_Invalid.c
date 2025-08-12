/*valid Invalid*/
#include <stdio.h>

int main() {
    int amt;
    
    printf("Enter amount :");
    scanf("%d",&amt);
    
    if(amt%100 == 0){
        printf("Valid amount");
    }
    else 
    printf("invalid amount");

    return 0;
}
