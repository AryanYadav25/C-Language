#include <stdio.h>

int main() {
    // Program to find simple intrest 
    // hahhahahha
    printf("Enter the values below to get your SI\n");
    float p,r,t;
    printf("Enter the principal amount:");
    scanf("%f", &p);
    printf("Enter the rate of intrest:");
    scanf("%f", &r);
    printf("Enter the time period in years:");
    scanf("%f", &t);

    float SI = (p*r*t)/100;
    int total = p+SI;

    printf("Your simple intrest is: %f\n", SI);
    printf("Total ammount to paid is:%d", total);

    return 0;
}