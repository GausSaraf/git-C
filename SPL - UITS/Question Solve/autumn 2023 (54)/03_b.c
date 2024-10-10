#include <stdio.h>
#include <math.h>

int main()
{
printf("Input N: ");
    long long n,sum = 0;
    scanf("%lld",&n);

printf("The mentioned series:\n\n");
    for(long long i = 1; i<=n; i++)
    {
        if(i==n)
        {
            printf(" %lld^(%lld)",i,i);
            sum = sum + pow(i,i);
        }
        else
        {
           printf(" %lld^(%lld) +",i,i);
           sum = sum + pow(i,i);
        }
    }
    printf(" = %lld\n",sum);
    return 0;
}
