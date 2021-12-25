/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 27/07/21
                                 Experiment 17:
     To write a C program to calculate the mean, variance and standard 
                             deviation using functions.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

float Std_Dev(int a[], int n);
int main()
{
    float SD;
    int a[30], i, n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    SD = Std_Dev(a, n);

    return 0;
}

float Std_Dev(int a[], int n)
{
    float M, V, SD, varsum=0;
    int i, sum=0;
    
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    M = sum/n;
 
    for(i=0; i<n; i++)
    {
        varsum = varsum + pow((a[i]-M),2);
    }
    
    V = varsum/n;
    SD = sqrt(V);
  
    printf("\nMean = %f\n", M);
    printf("Variance = %f\n", V);
    printf("Standard deviation = %f\n", SD);
 
    return SD;
}



