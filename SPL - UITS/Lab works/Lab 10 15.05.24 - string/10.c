#include <stdio.h>

int fact(int n)
{
    if(n>0)
    {
        printf(" %d ",n);
        fact(n-1);
    }
    printf("\n\t\t %d \n",n);
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
