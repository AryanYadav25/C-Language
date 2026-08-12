
    // write a program to check if student is passed or failed by taking input from student, to pass student need
    // 40% marks and 33% in each subject and there is 3 subjects


    #include <stdio.h>

    int main() {
        int sub1, sub2, sub3;
        printf("Enter marks:");
        scanf("%d", &sub1);
        printf("Enter marks:");
        scanf("%d", &sub2);
        printf("Enter marks:");
        scanf("%d", &sub3);

        float percentage = ((sub1 + sub2 + sub3) / 300.0) * 100;

        printf("%.2f\n", percentage);

        if(sub1<33 || sub2<33 || sub3<33){
            printf("you are failed due to less number in each individual");
        }
        else if(percentage >= 40){
            printf("You are pass");
        }
        else{
            printf("You are failed");
        }
        return 0;
    }   