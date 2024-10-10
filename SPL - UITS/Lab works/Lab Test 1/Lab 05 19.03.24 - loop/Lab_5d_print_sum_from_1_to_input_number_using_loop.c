//print sum form 1 to input number using loop

#include<stdio.h>

int main()
{
    int i,n,sum;
    sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("%d",sum);
    return 0;
}