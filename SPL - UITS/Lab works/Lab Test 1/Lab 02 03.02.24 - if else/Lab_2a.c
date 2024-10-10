//check whether a number is positive, negative or zero

#include<stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);
    if(a==0)
    {
        printf("\nZero\n");
    }
    else if(a>0)
    {
        printf("\nPositive\n");
    }
    else
    {
        printf("\nnegative\n");
    }

    return 0;
}
