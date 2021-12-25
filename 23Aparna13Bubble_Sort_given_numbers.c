/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 20/07/21
                                 Experiment 13:
        To write a program to sort the given numbers using bubble sort.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[100], n, i, j, d, swap;
    printf("Enter the number of elements in the array: ");
    scanf("\n%d", &n);
    printf("\nPlease enter the numbers you would like bubble sorted: \n");
    for (i=0; i<n; i++)      
    {
        scanf("%d", &array[i]);
    }
    for (i=0; i<n-1; i++)    
    {
        for (d=0; d<n-i-1; d++)
        {
            if (array[d] > array[d+1])
            {
                swap = array[d];
                array[d] = array[d+1];
                array[d+1] = swap;
            }
        }
    }
    printf("\nSorted list in ascending order: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}



