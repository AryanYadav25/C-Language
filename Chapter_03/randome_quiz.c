#include <stdio.h>

int main() {
    // write a program to find the grades of student marks given below 
    // 90-100 = A
    // 80-90 = B
    // 70-80 = C
    // 60-70 = D
    // 50-60 = E
    // <50 = F

    float marks;
    printf("Enter your marks to get grade:");
    scanf("%f", &marks);

    if(marks >= 90){
        printf("Grade A");
    }
    else if(marks >= 80){
        printf("Grade B");
    }
    else if(marks >= 70){
        printf("Grade C");
    }
    else if(marks >= 60){
        printf("Grade D");
    }
    else if(marks >= 50){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }

    return 0;
}