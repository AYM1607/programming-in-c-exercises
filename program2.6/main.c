/*  This program adds two integers and
    displays the result */

#include <stdio.h>

int main(void)
{
    // Declare variables.
    int value1, value2, sum;

    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    // Display the result.
    printf("The sum of %i and %i is %i.\n", value1, value2, sum);
}