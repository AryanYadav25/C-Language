#include <stdio.h>

int main() {
    // what will the output of the program 

    int a = 6;

    if(a = 11){  // the issue there is only single = used that is why if taking arhument which says a = 11 its not checking its taking this as an argumnet
                // to fix this just double == t0 check wheather a == 11 or not 
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }

    return 0;
}