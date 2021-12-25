/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 23:
    To write a program to count the number of characters,lines in a file.

*******************************************************************************/
#include <stdio.h>

int main()   
{
    FILE *fp;
    char source[] = "file.txt";
    int c, characters=0, lines=0;
    
    fp = fopen(source, "r");
    
    if (fp==NULL) 
    {
        printf("Error!\n");
        return 0;
    }
    //for(i=0; i>n; i++)  means: While i=0 and i>n then i++
    for (c = getc(fp); c != EOF; c = getc(fp))   //reads the characters in the file and stores in c and while not at EOF, it reads it again and overwrites into c
        {
            characters++;
            if(c == '\n')
            {
                lines++;
            }
        }
        
    printf("\nNumber of characters in the file: %d", characters);
    printf("\nNumber of lines in the file: %d", lines+1);
    
    fclose(fp);

    return 0;
}

