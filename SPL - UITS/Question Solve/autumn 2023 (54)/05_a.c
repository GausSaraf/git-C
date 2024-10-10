#include <stdio.h>
int min(int num[], int size)
{
    int min1 = num[0];
    for(int i = 0; i<3; i++)
    {
        if(num[i]<min1)
        {
            min1 = num[i];
        }
    }
    return min1;
}
int main()
{
    printf("input 3 values:\n");
    int num[3];
    int size = sizeof(num) / sizeof(num[0]);
    for(int i = 0; i<3; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nminimum value is %d\n",min(num,size));
    return 0;
}
