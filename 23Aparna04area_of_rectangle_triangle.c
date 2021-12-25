/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 01/05/21
                                 Experiment 4:
             To write a program for calculating the area of a
                            rectangle and triangle

*******************************************************************************/

#include <stdio.h>

int main()
{
    float l, h;
    printf("Please enter the length of the rectangle\n");
    scanf("%f", &l);
    
    printf("Please enter the height of the rectangle\n");
    scanf("%f", &h);
    
    printf("The area of the rectangle is: %f \n", h*l );
    printf("Please enter the length of the triangle\n");
    scanf("%f", &l);
    
    printf("Please enter the height of the triangle\n");
    scanf("%f", &h);
    
    printf("The area of the triangle is: %f \n", (h*l)/2);
    
    return 0;
}





