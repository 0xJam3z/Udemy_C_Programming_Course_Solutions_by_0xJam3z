// Sum of Triple Digits by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Take three digits as input and add them
    int digits, digit1, digit2, digit3;
    printf("Enter 3 digits: ");
    scanf("%d", &digits);
    digit1 = digits / 100;
    digit2 = (digits - (digit1*100)) / 10;
    digit3 = (digits - (digit1*100)) % 10;
    printf("The sum of all three digits (%d) is: %d\n", digits, (digit1+digit2+digit3)); 
    return 0;
}
/*  A better solution would have been:
    digit1 = digits / 100;
    digit2 = (digits / 10) % 10;
    digit3 = digits % 10;
*/
