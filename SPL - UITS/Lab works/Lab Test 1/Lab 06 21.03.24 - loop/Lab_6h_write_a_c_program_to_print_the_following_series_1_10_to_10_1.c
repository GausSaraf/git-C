//write a c program to print the following series -
/*
1 10
2 9
3 8
..
..
10 1
*/

#include <stdio.h>

int main()
{

     int i = 1;

     /*
     int j;
     for(i=1,j=10;i<=10;i++,j--)
     {
     printf("%d \t %d\n",i,j);
     }

     */
    while(i>=0 && i<=10){

        printf("%d ",i);
        i++;
        printf("%d \n",12-i);

    }
    return 0;
}
