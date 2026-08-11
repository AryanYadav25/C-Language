#include <stdio.h>

int main() {
    int a = 1; int b = 0;
    printf("The value of a and b is: %d\n", a&&b);
    printf("The value of a or b is: %d\n", a||b);

    printf("the value of not(a) is: %d\n", !a); // change the value of a to 0 from 1 
    printf("the value of not(b) is: %d\n", !b); // change the value of a to 1 from 0 

    if(a || b){
        printf("Both are true");
    }

    return 0;
}