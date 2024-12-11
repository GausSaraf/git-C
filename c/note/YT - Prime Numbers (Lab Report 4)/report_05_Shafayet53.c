#include<stdio.h>
int main()
{
    int x, cnt=0;
    scanf("%d", &x);
    for(int j = x; j>0; j--)
    {

        for (int i=1; i<=j; i++)
        {
            if (j%i == 0)
            {
                cnt++;
            }
        }

        if (cnt > 2)
        {
            continue;
            //printf("\n"); //"not prime\n"
        }
        else
        {
            printf("%d\n",j); //"prime\n"
        }
        //cnt=0;
    }
    return 0;
}
/*

// finding if a number is prime or not


#include<stdio.h>
int main()
{
    int x, cnt=0;
    scanf("%d", &x);

    for (int i=1; i<=x; i++)
    {
        if (x%i == 0)
        {
            cnt++;
        }
    }

    if (cnt > 2)
    {
        printf("not prime\n");
    }
    else
    {
        printf("prime\n");
    }
    return 0;
}

*/
