#include <stdio.h>

int main() {
    // Program to convert celcius to fahrenheit
    // hahahhhahah
    float a;
    printf("Enter the celcius value:");
    scanf("%f", &a);
    float celcius_to_fahrenheit = (a*9/5) + 32;
    int celcius_to_fahrenheit_f = (a*9/5) + 32;

    printf("In Fahrenheit: %fF\n", celcius_to_fahrenheit);
    printf("In Fahrenheit: %dF", celcius_to_fahrenheit_f);
    return 0;
}