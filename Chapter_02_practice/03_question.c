#include <stdio.h>

int main() {
    // program to check wheather a number is divisible by 97 or not 

    int a;
    printf("Enter value of a to check: 56");
    scanf("%d", &a);
    
    if(a%97 == 0){
        printf("Number is divisible by 97");
    }
    else{
        printf("Number is not divisible by 97");
    }
    return 0;
}