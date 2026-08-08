#include <stdio.h>

int main() {
    // Program to find area of rectangle 
    // I know I know this is basic :))
    float a,b;
    printf("This program is to calculate the area of rectangle\n");
    printf("Enter the length of rectangle:");
    scanf("%f", &a);
    printf("Enter the width of rectangle:");
    scanf("%f", &b);

    float area = a*b;

    printf("The area of rectangle is a*b: %f", area);


    return 0;
}