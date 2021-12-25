/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 20/07/21
                                 Experiment 14:
    To write a program to perform Matrix addition and matrix multiplication

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice, a[10][10], b[10][10], c[10][10], i, j, r1, c1, r2, c2, k;
    printf("1) Addition 2) Multiplication\n");
    printf("Please choose an option 1 or 2: ");
    scanf("%d", &choice);
    
    printf("Enter the size of matrix 1: \n");
        scanf("%d %d", &r1, &c1);
        printf("Enter the size of matrix 2: \n");
        scanf("%d %d", &r2, &c2);
        
    switch(choice)
    {
        case 1:  //Addition
        
        if (r1==r2 && c1==c2)
        {
            printf("Enter the elements of matrix 1: \n");
            
            for (i=0; i<r1; i++)
                for (j=0; j<c1; j++)
                    scanf("%d", &a[i][j]);
            printf("Enter the elements of matrix 2: \n");
            
            for (i=0; i<r2; i++)
                for (j=0; j<c2; j++)
                    scanf("%d", &b[i][j]);
                    
            printf("Matrix 1 is: \n");
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c1; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }
            printf("Matrix 2 is: \n");
            for (i=0; i<r2; i++)
            {
                for (j=0; j<c2; j++)
                {
                    printf("%d\t", b[i][j]);
                }
                printf("\n");
            }
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c1; j++)
                {
                    c[i][j] = a[i][j]+b[i][j];
                }
            }
            printf("The sum of the two matrices is: \n");
            
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c1; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Matrix addition of these two matrices is not possible\n");
        }
        break;
        
        case 2: //Multiplication
        
        if (c1==r2)
        {
            printf("Enter the elements of matrix 1: \n");
            
            for (i=0; i<r1; i++)
                for (j=0; j<c1; j++)
                    scanf("%d", &a[i][j]);
            printf("Enter the elements of matrix 2: \n");
            
            for (i=0; i<r2; i++)
                for (j=0; j<c2; j++)
                    scanf("%d", &b[i][j]);
                    
            printf("Matrix 1 is: \n");
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c1; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }
            printf("Matrix 2 is: \n");
            for (i=0; i<r2; i++)
            {
                for (j=0; j<c2; j++)
                {
                    printf("%d\t", b[i][j]);
                }
                printf("\n");
            }
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c2; j++)
                {
                    c[i][j]=0;
                    for (k=0; k<r2; k++)
                    {
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            printf("\nThe product of the two matrices is: \n");
            for (i=0; i<r1; i++)
            {
                for (j=0; j<c1; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
        
        else 
        {
            printf("Matrix Multiplication of these two matrices is not possible.\n");
        }
        break;
        
        default: 
        printf("An error has occured, please try again later!");
        break;
        
    }

    return 0;
}


