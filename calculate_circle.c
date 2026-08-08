#include <stdio.h>

int main() {
    // Program to find area of circle and volume of cylinder
    // hahahahhaahah
    float a,b,c;
    printf("Enter the values to get result\n");
    printf("Enter the radius of circle:");
    scanf("%f", &a);
    printf("Enter the height of cylinder:");
    scanf("%f", &b);
    printf("Enter the radius of cylinder:");
    scanf("%f", &c);


    float area_circle = 3.14*a*a;
    float volume_cylinder = 3.14*c*c*b;


    printf("The area of circle is: %f\n", area_circle);
    printf("The volume of cylinder is: %f", volume_cylinder);
    return 0;
}