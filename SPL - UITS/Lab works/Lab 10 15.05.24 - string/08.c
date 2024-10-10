#include <stdio.h>

int fact(int n)
{
    int res = 1;
    if(n==1)
    {
        return 1;
    }
    else
    {
        res = n*fact(n-1);
    }

    return res;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}
