//Calculate grade of a marks(user input)

#include<stdio.h>
int main ()
{
    float a;
    scanf("%f", &a);

if(a>=80 && a<=100)
    {
        printf("You got A+");
    }
    else if(a>=75 && a<= 79)
    {
        printf("You got A");
    }
    else if(a>=70 && a<= 74)
    {
        printf("You got A-");
    }
    else if(a>=65 && a<= 69)
    {
        printf("You got B+");
    }
    else if(a>=60 && a<= 64)
    {
        printf("You got B");
    }
    else if(a>=55 && a<= 59)
    {
        printf("You got B-");
    }
    else if(a>=50 && a<= 54)
    {
        printf("You got C+");
    }
    else if(a>=45 && a<= 49)
    {
        printf("You got C");
    }
    else if(a>=40 && a<= 44)
    {
        printf("You got C-");
    }
    else if(a>=0 && a<=39)
    {
        printf("You got F");
    }
    else
    {
        printf("Please enter a valid Marks");
    }



    return 0;
}

/*

//This will break for F output, because for output A the condition was <=79 and 0-39 is still true

    if(a>=80 && a<=100)
    {
        printf("You got A+");
    }
    else if(a<= 79)
    {
        printf("You got A");
    }
    else if(a<= 74)
    {
        printf("You got A-");
    }
    else if(a<= 69)
    {
        printf("You got B+");
    }
    else if(a<= 64)
    {
        printf("You got B");
    }
    else if(a<= 59)
    {
        printf("You got B-");
    }
    else if(a<= 54)
    {
        printf("You got C+");
    }
    else if(a<= 49)
    {
        printf("You got C");
    }
    else if(a<= 44)
    {
        printf("You got C-");
    }
    else if(a>=0 && a<=39)
    {
        printf("You got F");
    }
    else
    {
        printf("Please enter a valid Marks");
    }
*/