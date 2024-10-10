#include<stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Please enter a positive integer.\n");
        return 1; //continue
    }

    printf("Prime numbers between 1 and %d are: ",n);
    for(int i = 2; i <=n; i++)
    {
        int prime = 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}




