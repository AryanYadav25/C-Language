#include <stdio.h>

int main() {
    // WRITE A PROGRAM TO FIND GREATEST OF FOUR NUMBER ENTERED BY USER
    int a,b,c,d;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Enter num3:");
    scanf("%d",&c);
    printf("Enter num4:");
    scanf("%d",&d);

    if(a > b && a > c && a > d){
        printf("a is greater");
    }
    else if(b > a && b > c && b > d){
        printf("b is greater");
    }
    else if(c > a && c > b && c > d){
        printf("c is greater");
    }
    else{
        printf("d is greater");
    }
    return 0;
}