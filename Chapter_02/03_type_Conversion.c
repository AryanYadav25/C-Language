#include <stdio.h>

int main() {
    float a = 9.0;
    int b = 2;
    
    float c = a/b;
    int d = 5.5;

    printf("The value of c is: %f\n", c);
    printf("The value of d is: %d", d);  // only 5 will be printed because int cannot hold float values 

    return 0;
}