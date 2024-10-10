#include <stdio.h>

int main()
{
    int i,j, n=10, cnt=0;
    for(i=2; i<=10 ; i++)
    {
        cnt =0;
        for(j=1; j<=i ; j++)
        {
            if(i%j == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            printf("%d = prime number \n",i);
        }
    }
    return 0;
}
