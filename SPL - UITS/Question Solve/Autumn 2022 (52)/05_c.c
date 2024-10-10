#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("\n\n");
int  k =11;
    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
