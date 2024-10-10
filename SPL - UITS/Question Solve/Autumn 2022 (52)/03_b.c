#include <stdio.h>
#include <math.h>

int main()
{
printf("Input N: ");
    int n,sum = 0;
    scanf("%d",&n);

printf("The mentioned series:\n\n");
    for(int i = 1; i<=n; i++)
    {
        if(i==n)
        {
            printf(" %d^(2)",i);
            sum = sum + pow(i,2);
        }
        else
        {
           printf(" %d^(2) +",i);
           sum = sum + pow(i,2);
        }
    }
    printf(" = %d\n",sum);
    return 0;
}
