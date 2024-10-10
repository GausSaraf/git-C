#include<stdio.h>

int main()
{

    printf("Whoever you are, input an Array one by one:\n");
    int x[5],find,found = 0;
    for(int i = 1; i <=5; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n# Set A:\n");
    printf("\nentered Array is:\n");
    for(int i = 1; i <=5; i++)
    {
        printf("%d at index %d\n",x[i],i);
    }

    printf("\n# Set B:\n");
    printf("\n(to find the max value we first take an initial one as max and then compare with others, if any other max exists, it should overwrite the previous one)\n");
    int max = x[1];
    for(int i = 1; i <=5; i++)
    {
        if(x[i]>max)
        {
            max = x[i];
        }
    }
    printf("\nmaximum value among these is %d\n",max);

    printf("\n# Set C:\n");

    printf("\n(same logic as max value, just the opposite)\n");
    int min = x[1];
    for(int i = 1; i <=5; i++)
    {
        if(x[i]<min)
        {
            min = x[i];
        }
    }
    printf("\nlowest number among these is %d\n",min);

    printf("\n# Set D:\n");
    printf("\nnow tell me, which value to find???\n");
    scanf("%d",&find);
    for(int i = 1; i <=5; i++)
    {
        if(x[i]==find)
        {
            printf("value %d is in index %d\n",find,i);
            found++;
        }
    }
    if(found==0)
    {
        printf("Value not in the array\n");
    }

    return 0;
}

