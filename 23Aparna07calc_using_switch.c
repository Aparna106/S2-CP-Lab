/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 05/07/21
                                 Experiment 07:
     To write a simple menu driven calculator program using switch statement.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    float add1, add2, sub1, sub2, multi1, multi2, divi1, divi2;
    
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
    printf("Enter your choice from 1-4: \n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
        printf("Enter the two numbers you wish to add: \n");
        scanf("%f %f", &add1, &add2);
        printf("The result is: %f", add1+add2);
        break;
        
        case 2:
        printf("Enter the two numbers you wish to subtract: \n");
        scanf("%f %f", &sub1, &sub2);
        printf("The result is: %f", sub1-sub2);
        break;
        
        case 3:
        printf("Enter the two numbers you wish to multiply: \n");
        scanf("%f %f", &multi1, &multi2);
        printf("The result is: %f", multi1*multi2);
        break;
        
        case 4:
        printf("Enter the two numbers you wish to divide: \n");
        scanf("%f %f", &divi1, &divi2);
        printf("The result is: %f", divi1/divi2);
        break;
        
        default:
        printf("An error has occurred, please try again. \n");
    }

    return 0;
}





