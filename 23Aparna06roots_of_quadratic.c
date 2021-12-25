/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 08/05/21
                                 Experiment 6:
         To write a program to find the roots of a quadratic equation.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    // in the form: ax^2+bx+c=0
    float a, b, c, d, x1, x2;

    printf("Please enter the coefficients a, b and c in order: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    d=b*b-4*a*c;
    
    if(d>0) {
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("x1 = %f \nx1 = %f", x1, x2);
    }
    else if(d=0) {
        x1=x2=-b/2*a;
        printf("x = %f", x2);
    }
    else {
        printf("It is not a real number.\n");
    }
    
    return 0;
}





