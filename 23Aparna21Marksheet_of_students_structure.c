/******************************************************************************

                             Program by Aparna Nair
                                     CS-A
                                 Done on 03/08/21
                                 Experiment 21:
             To print the mark sheet of n students using structures.

*******************************************************************************/
#include <stdio.h>

struct student
{
    int roll_no;
    char name[30];
    float marks[3];
    float total_marks;
};


int main()
{
    struct student stu[100];
    int i, n; 
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &stu[i].roll_no);
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", stu[i].name);
        printf("Enter the marks of student %d for three subjects: ", i+1);
        scanf("%f%f%f", &stu[i].marks[0], &stu[i].marks[1], &stu[i].marks[2]);
        stu[i].total_marks = (stu[i].marks[0]+stu[i].marks[1]+stu[i].marks[2]);
    }
    
    printf("\n          MARKSHEET");
    printf("\nRoll no\tName\tTotal Marks\n\n");
    
    for (i=0; i<n; i++)
    {
        printf("%d\t%s\t%.2f\n", stu[i].roll_no, stu[i].name, stu[i].total_marks);
    }

    return 0;
}





