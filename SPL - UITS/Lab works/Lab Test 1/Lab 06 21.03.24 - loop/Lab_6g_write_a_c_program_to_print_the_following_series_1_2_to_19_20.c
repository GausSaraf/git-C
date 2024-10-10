//write a c program to print the following series -
/*
1 2
3 4
5 6
. .
. .
19 20
*/

#include <stdio.h>

int main()
{

     int i = 1;
    while(i>=0 && i<=20)
    {
        printf("%d ",i);
        i++;
        printf("%d \n",i);
        i++;
    }
    return 0;
}
