#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if(age>60){
        printf("You are senior citizen and can drive");
    }
    // if(age>=18){
    //     printf("You can drive");   // this also works 
    // }
    else if (age>=18){
        printf("You can drive");
    }
    else{
        printf("You are not eligible");
    }
    
    return 0;
}