/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 20:
To write a program to print the factorial of the given number using recursive
                                    function

*******************************************************************************/
#include <stdio.h>

int factorial(int n);
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf ("Factorial of %d is %d\n", n, factorial (n));   // calling

    return 0;
}

int factorial(int j)
{
    if (j <= 1)  // factorial of 0 and 1
        {
            return 1;   // is 1
        }
    return j * factorial (j - 1);   // runs from n>1
}






