//write output for given NESTED LOOP

#include<stdio.h>

int main()
{
    int i,j;
    for(i=1; i<=3; i++)
    {
        //printf("%d i\n",i);
        for(j=4; j>=i; j--)
        {
            printf(" %d i %d j\n",i,j);
        }
        printf("\n");
    }
/*
     int i,j;
    for(i=1; i<=3; i++)
    {
        //printf("%d i\n",i);
        for(j=i; j<=4; j++)
        {
            printf(" %d i %d j\n",i,j);
        }
        printf("\n");
    }
*/

    return 0;
}
