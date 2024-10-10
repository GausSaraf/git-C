//print sum of the series: 1 + 11 + 111 + 1111 + .... + (n th term)

#include<stdio.h>

int main()
{
    long long i, n, sum =0, count = 0;
    printf("Input range: ");
    scanf("%lld",&n);
    printf("\n\n");
    for(i=1;count<n;i=i*10)
    {
        count++;
        if(i==1)
        {
            sum= sum+i;
            printf("%lld ",i);
        }
        else
{
        i = i+1;
        sum = sum + i;
        printf("%lld ",i);
        }
    }
    printf("\nSum of the series is = %lld",sum);
    return 0;

}
