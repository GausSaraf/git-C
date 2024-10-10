//write a c program to find a number from a list of numbers as given below
// n[5]={3,5,7,2,9}

#include <stdio.h>

int main()
{
    int n[5]= {3,5,7,5,9}, count = 0, find=5, flag = -1;

    for(int i = 0; i <5; i++)
    {
        if(n[i]==find)
        {
            flag =i;
            //break;
            count++;
        }
    }
    if(flag>=0)
    {
        //printf("Found %d in index %d\n", find, flag);
        printf("Found %d total %d times\n", find, count);
    }
    else
    {
        printf("No %d found", find);
    }



    return 0;
}
