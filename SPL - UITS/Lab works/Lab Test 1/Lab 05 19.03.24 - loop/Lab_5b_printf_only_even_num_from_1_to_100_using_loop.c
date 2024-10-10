//printf only even num from 1 to 100 using loop

#include<stdio.h>

int main()
{
    for(int i = 1; i<=100; i++)
    {
        (i%2==0)? printf("%d",i): printf("\n");

    }


    return 0;
}
