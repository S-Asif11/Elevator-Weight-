#include<stdio.h>
int main(){
    int num,pre,post;
    scanf("%d",&num);
    if(num>=100 && num<=999){

        pre= ((num/100)*100);
        post =(((num/100)+1)*100);



        printf("Previous multiple : %d\n",pre);
        printf("next multiple : %d\n",post);
    }
    else printf("Invalid Input");
}
