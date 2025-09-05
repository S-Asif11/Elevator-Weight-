#include <stdio.h>

int main() {
    int n, lastDigit, nextDigit;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;   // take last digit
    n = n / 10;           // remove last digit

    while(n > 0) {
        nextDigit = n % 10;   // get next digit

        // check difference
        if(lastDigit - nextDigit == 1 || nextDigit - lastDigit == 1) {
            lastDigit = nextDigit;   // move to next digit
            n = n / 10;              // remove processed digit
        } else {
            printf("It is not a step number\n");
            return 0;   // stop program
        }
    }

    printf("It is a step number\n");
    return 0;
}

