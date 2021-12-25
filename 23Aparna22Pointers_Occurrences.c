/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 22:
To write a program using pointers to access the elements of an array and count 
         the number of occurrences of the given number in the array. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, a[30], s, count=0;
    int *p;
    p = &a[0];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array one by one: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", (p+i));
    }
    printf("Enter the number to find: ");
    scanf("%d", &s);
    for (i=0; i<n; i++)
    {
        if ((*(p+i))==s)
        {
            count++;
        }
    }
    
    printf("The number of occurence of number %d is: %d", s, count);

    return 0;
}




