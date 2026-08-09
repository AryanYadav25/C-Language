#include <stdio.h>

int main()
{
    int a = 5;
    int b = 6;
    int c = a + b;

    printf("The value of a is %d and value of b is %d and their sum is %d.\n", a, b, c);
    // modulas is used to get the remaining value 

    printf("The remainder when a is divided by b is: %d", a%b);

    // This does not work for exponentiation in c
    // int  d = a^b;

    return 0;
}