//write a c program to find a number from a list of numbers as given below
// n[5]={3,5,7,2,9}

#include <stdio.h>

int main()
{

    int n[5]= {3,5,7,2,9}, count = 0, find=5, flag = -1;

    for(int i = 0; i <5; i++)
    {
        if(n[i]==find)
        {
            flag =i;
        }
    }
    if(flag>=0)
    {
        printf("Found %d in index %d\n", find, flag);
    }
    else
    {
        printf("No %d found", find);
    }

    /*
    int n[5]= {3,5,7,2,9}, count = 0;

    for(int i = 0; i <5; i++)
    {
        if(n[i]==5)
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("Found 5");
    }
    else
    {
        printf("No 5 found");
    }
    */

    /*
        for(int i = 0; i <5; i++)
        {
            if(n[i]!=5)
            {
                continue;

            }
            else if(n[i]==5)
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Found 5");
        }
        else
        {
            printf("No 5 found");
        }

    */

    return 0;
}
