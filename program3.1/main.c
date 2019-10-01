#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int integerVal = 10;
    float floatingVal = 331.79;
    double doubleVal = 8.44e+11;
    char charVal = 'W';

    // The code below is equivalente to
    // _Bool boolVar = 0;
    bool boolVar = false;

    printf("integerVal = %i.\n", integerVal);
    printf("floatingVal = %f.\n", floatingVal);
    printf("doubleVal = %e.\n", doubleVal);
    printf("doubleVal = %g.\n", doubleVal);
    printf("charVal = %c.\n", charVal);

    printf("boolVar = %i.\n", boolVar);

    return 0;
}