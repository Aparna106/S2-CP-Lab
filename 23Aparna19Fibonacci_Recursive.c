/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 19:
     To write a program to print the Fibonacci series using recursive function.

*******************************************************************************/
#include <stdio.h>

int fibonacci(int);
int main()
{
    int n, i;
    printf("Please enter the number: ");
    scanf("%d", &n);
    printf("The Fibonacci series is: ");
    
    for (i=0; i<n; i++)
    {
        printf("%d ", fibonacci(i));   // calling
    }

    return 0;
}

int fibonacci(int j)
{
    if (j==0)   
    {
        return 0;
    }
    else if (j==1)
    {
        return 1;
    }
    else   // j>1 can run
    {
        return fibonacci(j-1) + fibonacci(j-2);   // the sum of the two before it, starting from 0 and 1
    }
    
}




