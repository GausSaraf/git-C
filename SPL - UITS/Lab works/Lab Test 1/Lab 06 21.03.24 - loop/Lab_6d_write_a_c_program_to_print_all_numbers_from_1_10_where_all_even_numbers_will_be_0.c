//write a c program to print all numbers from 1-10 where all even numbers will be 0

#include <stdio.h>

int main()
{

int i = 1;
    while(i>0 && i<=10)
    {
        i%2==0? printf("0 "):printf("%d ",i);
        i++;
    }
    return 0;
}
