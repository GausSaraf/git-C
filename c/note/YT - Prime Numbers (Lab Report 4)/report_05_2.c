//Write a C program to print prime numbers between 1 to n.

#include<stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("\nprime numbers between 1 to given number are: \n");

    for(int j = 1; j<=a; j++)
    {

        for(int i = 1; i<=j/2; i++)
        {
            if (j%i==0 ) //j!= 1 && j==i && j%i==0
            {
                //printf("%d\n",j);
                break;
                //continue;
            }
            else
            {
                printf("%d\n",j);
                //continue;
                //printf("Not Prime\n");
                //break;
            }

        }

    }

    return 0;
}
