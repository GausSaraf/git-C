//print 1 2 3 4 ~(5)~ 6 7 8 9 10

#include <stdio.h>

int main()
{
    int i = 1;
    while(i>0 && i<=10)
    {
        i!=5? printf("%d ",i):printf("");
        i++;
    }

    return 0;
}
