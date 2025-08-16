#include<stdio.h>
int main(){
    int time;
    scanf("%d",&time);

    if (time>=0 && time <=5){
        printf("It is night.");
    }
     if (time>=6 && time <=11){
        printf("It is morning.");
    } if (time>=12 && time <=17){
        printf("It is afternoon.");
    } if (time>=18 && time <=23){
        printf("It is evening.");
    }
}
