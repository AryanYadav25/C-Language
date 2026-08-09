#include <stdio.h>

int main() {
    int a,b,c;
    a = 5;
    b = 4;
    c = 8;

    printf("The value is: %d\n", a*b/c); // first a multiply b then divide by c
    printf("The value is: %d", 4*b/3*a + 6*a);
    // 4*b/3*a + 6*a
    // 16/3*a + 30
    // 5*a + 30
    // 25 + 30 = 55 
    return 0;
}