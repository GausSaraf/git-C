//print prime numbers 1 to n using loop

#include<stdio.h>

int main()
{
    printf("The prime numbers in 1-100 are: \n");
    int i,j;
    int tmp;
    for(i = 1; i<=100; i++) //divide by 2 and check if it's divisible by it's lower values ????

    {
        tmp = i/2;
        for(j = 1; j<=tmp; j++);
        {
            if(tmp%j!=0)
            {
                printf("%d\n",i);
            }
        }


    }

    /*
        for(int i = 2; i<=100; i++)
        {

            if(i==2 || i==3 || i==5 || i==7)
            {
                printf("%d\n", i);
            }
            else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 )
            {
                printf("%d\n", i);
            }

        }

        */

    return 0;
}
