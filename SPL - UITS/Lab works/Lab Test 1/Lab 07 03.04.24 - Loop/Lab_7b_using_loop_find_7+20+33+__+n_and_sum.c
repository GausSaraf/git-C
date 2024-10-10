//using loop find 7+20+33+...+n and sum
#include<stdio.h>

int main()
{
    int sum = 7,a,i = 7;
    scanf("%d",&a);
    printf("Sum = %d ", i);
    while(i<a)
    {
        i=i+13;
        printf("+ %d ",i);
        sum = sum + i;

    }

    printf("= %d", sum);

    return 0;
}
