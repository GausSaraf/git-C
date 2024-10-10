//write a c program to find 'a' in char array {string} "Bangladesh"
#include <stdio.h>

int main()
{
    char find='a', ch[30]="Bangladesh";
    int count = 0, flag = -1;

    for(int i = 0; i <5; i++)
    {
        if(ch[i]==find)
        {
            flag =i;
            count++;
            break;

        }
    }
    if(flag>=0)
    {
        printf("Found %c in index %d and for %d times\n", find, flag, count);
        //printf("Found %c total %d times\n", , count);
    }
    else
    {
        printf("No %d found", find);
    }



    return 0;
}
