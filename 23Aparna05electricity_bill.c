/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 08/05/21
                                 Experiment 5:
             To write a program for electricity bill preparation.

*******************************************************************************/

#include <stdio.h>

int main () 
{
  
  int units;
  
  
  printf("The units of electricity consumed: \n");
  scanf("%d", &units);
  
  if (units <= 100)
    printf("Your amount is: %d", units*1);
  else if (units <= 300)
    printf("Your amount is: %d", 100+((units-100) *2));
  else 
    printf("Your amount is: %d", 500+((units-300)*3));

  return 0;
}



