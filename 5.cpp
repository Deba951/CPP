#include <stdio.h>

//int main shoul not be declared here.

struct student 
{
    char firstName[100];
    int roll;
    float marks;
} s[100];//first structure input, (For nested structure this format should be continued)

//Execution process strts here.
int main() 
{
    int i,j;
    printf("Enter information of students:\n");
    printf("Enter number of students:\n %d", j );
    	scanf("%d", &j);

    // storing information
    for (i = 0; i < j; ++i) 
    {
        s[i].roll = i + 1;//Note the structure calling way.
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < j; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}

