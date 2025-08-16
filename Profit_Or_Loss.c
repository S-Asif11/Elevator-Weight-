#include<stdio.h>
int main(){
    int cp,sp;

    scanf("%d %d",&cp,&sp);

    if (sp>cp){
        printf("The transaction was profitable.");

    }
    else if (sp==cp){
        printf("No profit, no loss.");
       
    }
    else printf("The transaction was loss-making.");
}
