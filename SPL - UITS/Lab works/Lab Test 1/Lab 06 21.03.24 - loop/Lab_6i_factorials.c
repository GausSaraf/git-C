//factorials

#include <stdio.h>

int main()
{
    int i,sum=1;
    for(i=5;i>=1;i--)
    {
        sum=sum*i;
    }
    printf("%d",sum);


    return 0;
}
