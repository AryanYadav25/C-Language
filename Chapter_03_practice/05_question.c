// Write a program to check whether character enter is lowercase or not 

#include <stdio.h>

int main() {
    char name;
    printf("Enter your name:");
    scanf("%c", &name);
    // printf("the value of %d", name);A
    if(name>=97 && name<=122){
        printf("The value is lowercase");
    }
    else{
        printf("This is upper case");
    }
    return 0;
}