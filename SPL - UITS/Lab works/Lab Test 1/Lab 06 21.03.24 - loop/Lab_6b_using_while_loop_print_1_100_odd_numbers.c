//using while loop, print 1-100 odd numbers

#include <stdio.h>

int main()
{
    int i = 0;
    while(i>=0 && i<=100)
    {
        i%2!=0? printf("%d",i):printf("\n");
        i++;
    }

    return 0;
}
