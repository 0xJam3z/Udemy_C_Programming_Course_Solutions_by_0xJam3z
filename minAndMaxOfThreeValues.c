// Get three int inputs and find the min and max values of the three.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input1, input2, input3, min, max;

    printf("Input a number: ");
    scanf("%d", &input1);
    printf("Input a second number: ");
    scanf("%d", &input2);
    printf("Input a third number: ");
    scanf("%d", &input3);

    min = max = input1;

    if (input2 > max)
    {
        max = input2;
    }
    if (input2 < min)
    {
        min = input2;
    }
    if (input3 > max)
    {
        max = input3;
    }
    if (input3 < min)
    {
        min = input3;
    }

    printf("%d is min, %d is max\n", min, max);
    return 0;
}
/*
So this is not the most efficient method as you'll see from the video for this, but a solution nonetheless. A more proper way of doing this would have been
    max = a;
    min = b;
    if(a<b)
    {
        min = b;
        max = a;
    }
    if (max < c)
        max = c;
    if (c < min)
        min = c;
*/