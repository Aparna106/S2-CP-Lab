/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 20/07/21
                                 Experiment 12:
    To write a program to print the sum and average of elements in an array

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n;
    float number[100], sum=0.0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++)
    {
        scanf("%f", &number[i]);
        sum=sum+number[i];
    }
    
    avg=sum/n;
    printf("\nSum = %f", sum);
    printf("\nAverage = %f", avg);
    
    return 0;
}



