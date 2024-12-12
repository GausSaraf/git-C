#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    printf("First %d prime numbers are:\n", n);
    for (i = 2; n > 0; i++)
    {
        int prime = 1;
        for (j = 2; j <= i / 2; j++) //j<=i //j<=sqrt(i)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
            n--;
        }
    }
    return 0;
}


