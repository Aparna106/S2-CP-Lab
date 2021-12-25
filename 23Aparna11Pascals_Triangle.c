/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 12/07/21
                                 Experiment 11:
                 To write a program to print Pascal’s triangle.

*******************************************************************************/
#include <stdio.h>

int main() 
{
   int a=1, rows, space, i, j;
   printf("Please enter the number of rows: ");
   scanf("%d", &rows);
   printf("This is your Pascal's Triangle: \n");
   for (i=0; i<rows; i++)
   {
      for (space=1; space<=(rows-i); space++)
         printf("  ");
      for (j=0; j<=i; j++) 
     {
         if (j==0 || i==0)
            a=1;
         else
            a=a*(i-j+1)/j;
         printf("%4d", a);
      }
      printf("\n");
   }
   return 0;
}


