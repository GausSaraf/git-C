//print sum form 1 to input number using loop

#include<stdio.h>

int main()
{
    int sum =0,a;
    scanf("%d",&a);
    printf("Sum = %d", sum);
    for(int i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
            printf(" + %d ",i);

        }
        else
        {

            continue;

        }

    }
    printf("= %d", sum);

    return 0;
}

