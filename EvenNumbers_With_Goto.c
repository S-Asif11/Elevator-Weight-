#include <stdio.h>


int main()

{

    int no;

    int count = 0;

    scanf("%d", &no);


    if(no == 0)

    {

        printf("invalid!.");

        return 0;

    }


    printf("1 to %d even numbers are:", no);


    if(no > 0)

    {

    s:


    printf(" %d", count += 2);


    while(count < no-1)

    { 

        goto s;

    }

    } 

    else

    {

    k:


    printf(" %d", count -= 2);


    while(count > no)

    { 

        goto k;

    }

    }

    

    return 0;

}
