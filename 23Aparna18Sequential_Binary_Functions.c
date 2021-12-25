/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 18:
To write a C program to perform sequential and binary search using functions

*******************************************************************************/
#include <stdio.h>

void seq(int a[], int n, int key);
void bin(int a[], int n, int key);
int main()
{
    int choice, n, d, swap, key, i, a[30];
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i=0; i<n-1; i++)    
    {
        for (d=0; d<n-i-1; d++)
        {
            if (a[d] > a[d+1])
            {
                swap = a[d];
                a[d] = a[d+1];
                a[d+1] = swap;
            }
        }
    }
    
    printf("The sorted array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nNumber the you would like to find: ");
    scanf("%d", &key);
    printf("\nMENU:\n");
    printf("1) Sequential Search\n2) Binary Search\n");
    printf("Choose one of the options: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        {
            printf("\nThrough sequential search, it is found that ");
            seq(a, n, key);
            break;
        }
        
        case 2:
        {
            printf("\nThrough binary search, it is found that ");
            bin(a, n, key);
            break;
        }
        
        default:
            printf("Please choose one of the available options!");
        break;
            
    }
    
    return 0;
}

void seq(int a[], int n, int key)
{
    int i, pos, found=0;
        
        for (i=0; i<n; i++)
        {
            if(key==a[i])
            {
                found = 1;
                pos = i;
                break;
            }
        }
        if (found == 1)
        {
            printf("the Number is found in position no. %d\n", pos+1);
        }
        else 
        {
            printf("the Number is not present in the array.\n");
        }
    
}

void bin(int a[], int n, int key)
{
    int i, low, high, mid;
    
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    
    while (low <= high)
    {
        if (a[mid] < key)
        low = mid + 1;
        else if (a[mid] == key)
	    {
	        printf ("%d found at location %d.\n", key, mid + 1);
	        break;
	    }
        else
	    {
	        high = mid - 1;
	        mid = (low + high) / 2;
	    }
    }
    if (low > high)
	{
	    printf ("The Number is not present in the array.\n");
	}
}



