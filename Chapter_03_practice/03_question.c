    #include <stdio.h>

    int main() {
        // Calculate income tax paid by the an employee to the government as per the slabs mentioned below:

        // income slab          TAX
        // 2.5 - 5.0L           5%      
        // 5.0 - 10.0L          20%      
        // above 10.0L          30%
        
        int income;
        printf("Enter your income:");
        scanf("%d", &income);

        if(income>=250000 && income<=500000){
            printf("You will have to pay 5%% of your income which is:%.2f",income*0.05);
        }
        else if(income>500000 && income<=1000000){
            printf("You will have to pay 20%% of your income which is:%.2f",income*0.20);
        }
        else if(income>1000000){
            printf("You have to pay 30%% of your income which is:%.2f",income*0.30);
        }
        else{
            printf("You do not fall in tax slab");
        }


        return 0;
    }


    // something different from question

    
    #include <stdio.h>
    
    int main() {
    int salary;
    float tax;

    printf("Enter your salary:");
    scanf("%d",&salary);

    if(salary<=250000){
        printf("No tax");
    }
    else if(salary <= 500000){
        tax = (salary - 250000)*0.05;
    }
    else if(salary <= 1000000){
        tax = (250000 * 0.05) + (salary - 500000)*0.20;
    }
    else{
        tax = (250000 * 0.05) + (500000 * 0.20) + (salary-1000000) * 0.30;
    }
    printf("You tax is: %.2f", tax);
        return 0;
    }