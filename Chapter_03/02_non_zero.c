#include <stdio.h>

int main() {
    if(1){
        printf("This is executable\n");
    }
    if("c"){
        printf("This is also executable\n");
    }
    if(34.2){
        printf("This is also executable\n");
    }
    if(0){
        printf("This is not executable\n");
    }
    return 0;
}