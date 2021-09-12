#include<stdio.h>

int main()

{
    // Asking the user to enter their mark.
    int mark=0;
    printf("Enter the student mark:");
    scanf("%d", &mark);

    // using if else ladder statement finding which grade is assigned for the user given mark.

    if(mark>=85 && mark<=100)
    {
        printf("Grade A");
    }
    else if(mark>=70 && mark<=84)
    {
        printf("Grade B");
    }
    else if(mark>=55 && mark<=69)
    {
        printf("Grade C");
    }
    else if(mark>=40 && mark<=54)
    {
        printf("Grade D");
    }
    else
    {
        // if all the above mentioned is not true this last statement is executed.
        printf("Grade F");
    }

    return 0;

}
