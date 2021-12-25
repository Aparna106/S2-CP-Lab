/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 13/07/21
                                 Experiment 09:
         To write a program to print all the prime numbers of a given range.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int low, high, i, j, flag;
    printf("Please enter the lower and the upper range respectively: \n");
    scanf("%d %d", &low, &high);
    printf("The prime numbers from  %d to %d is: \n", low, high);
    
    for (i=low; i<high; i++)
    {
        flag=0;
        for (j=2; j<=i/2; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("%d\n", i);
    }

    return 0;
}


