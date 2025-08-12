/* max between three number*/
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter first number :");
    scanf("%d",&a);
    
    printf("enter 2nd number :");
    scanf("%d",&b);
    
    printf("enter 3rd number :");
    scanf("%d",&c);
    
    if (a==b && a==c){
        printf("All are equal");
    }
    
    else if(a>b && a>c){
        printf("%d is bigger",a);
    }
    else if(b>a && b>c){
        printf("%d is bigger",b);
    }
    else printf("%d is bigger",c);

    return 0;
}
