/******************************************************************************

                                 Program by Aparna Nair
                                     CS-A
                                 Done on 05/07/21
                                 Experiment 08:
     To write a program to find the sum of digits of a given number. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, sum, r;
    sum=0;
    
    printf("Please enter a number: \n");
    scanf("%d", &num);
    
    while(num>0) {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    
    printf("The sum of the number is: %d", sum);

    return 0;
}


