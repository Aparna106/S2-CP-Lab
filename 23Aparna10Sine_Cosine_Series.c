/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 13/07/21
                                 Experiment 10:
         To write a program to print the sine and cosine series.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int choice, n, i;
    float x, sum, t;
    
    printf("1) Sine series \n2) Cosine series \n");
    printf("Please choose the option 1 or 2\n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
        printf("Enter the angle value and the value of n: \n");
        scanf("%f %d", &x, &n);
        x=x*3.1415/180;   //degrees to radians
        t=x;
        sum=x;
        for (i=1; i<=n; i++)
        {
            t=(t*(-1)*x*x)/(2*i*(2*i+1));
            sum=sum+t;
        }
        printf("The sine value is: %.4f", sum);
        break;
        
        case 2:
        printf("Enter the angle value and the value of n: \n");
        scanf("%f %d", &x, &n);
        x=x*3.1415/180;
        sum=1;
        t=1;
        for (i=1; i<n; i++)
        {
            t=t*(-1)*x*x/(2*i*(2*i-1));
            sum=sum+t;
        }
        printf("The cosine value is: %f", sum);
        break;
    }

    return 0;
}

