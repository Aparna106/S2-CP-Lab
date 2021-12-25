/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 27/07/21
                                 Experiment 15:
     To write a program to perform string manipulation functions like 
     string concatenations, comparison, find the length and string copy 
                         without using library functions.
*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
    char a[30], b[30];
    int choice, i=0, j=0, l=0, c1=0, c2=0;
    
    printf("MENU:\n");
    printf("1) Concatenations\n2) Comparison\n3) Find the length\n4) String copy\n");
    printf("Please choose an option from 1-4: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:   //Concatenation
        printf("\nPlease enter string 1: ");
        scanf("%s", a);
        printf("Please enter string 2: ");
        scanf("%s", b);
        
        for (i=0; a[i]!='\0'; i++);   //stores string 1
        for (j=0; b[j]!='\0'; j++, i++)   //concatenate string 2 right after string 1
        {
            a[i]=b[j];
        }
        
        a[i]='\0';   //ends the long string
        
        printf("\nAfter concatenation: %s",a);
        break;
        
        case 2:   //Comparison
        printf("\nPlease enter string 1: ");
        scanf("%s", a);
        printf("Please enter string 2: ");
        scanf("%s", b);
        
        while (a[i]==b[i] && a[i]=='\0')
	  	    i++;
            {
                if (a[i]==b[i])
                    printf("String 1 and String 2 are equal");
                else 
                    printf("String 1 and String 2 are NOT equal");
            }
        break;
        
        case 3:   //length
        printf("\nPlease enter the string: ");
        scanf("%s", a);
        for (i=0; a[i]!='\0'; i++)
        {
            l++;
        }
        
        printf("The length of the string is: %d", l);
        break;
        
        case 4:   //copying
        printf("\nPlease enter string 1: ");
        scanf("%s", a);
        for (i=0; a[i]!='\0'; i++)
        {
            b[i]=a[i];
        }
        
        b[i]='\0';
        
        printf("After copying, String 2 is: %s", b);
        break;
        
        default: 
        printf("An error has occured, please try again!");
    }
    
    
    return 0;
}



