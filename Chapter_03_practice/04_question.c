// Writw a program to find if year is leap year or not 

#include <stdio.h>

int main() {
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if(year % 400 == 0){
        printf("Year is leap year");
    }
    else{
        printf("%d is not a leap year",year);
    }

    return 0;
}