/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 27/07/21
                                 Experiment 16:
         To write a program to arrange names in alphabetical order.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char name[30][30], name2[30][30], temp[30];   //2D array because they are names (string)
    
    printf("Please enter the number of names to be checked: ");
    scanf("%d", &n);
    printf("Please enter the names:\n");
    
    for (i=0; i<n; i++)
    {
        scanf("%s", name[i]);   //reads one name
        strcpy(name2[i], name[i]);   //copies that name to an array name2
    }
    
    /*The selection sort part */
    
    for (i=0; i<n-1; i++)   //for each name 
    {
        for (j=i+1; j<n; j++)   //for checking the name after 
        {
            if (strcmp(name[i], name[j]) > 0)   //checks if its alphabetical
            {
                strcpy(temp, name[i]);      //Swaping part
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    
    printf("\nThe sorted lit of names is:\n");
    for (i=0; i<n; i++)   //prints the sorted list
    {
        printf("%s\n", name[i]);
    }
    
    return 0;
}


