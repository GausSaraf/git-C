#include <stdio.h>

int max(int num[], int size)
{
    int max1 = num[0];
    for(int i = 0; i<2; i++)
    {
        if(num[i]>max1)
        {
            max1 = num[i];
        }
    }
    return max1;
}


int main()
{
    printf("\n# Set A:\n");
    printf("input 2 values:\n");
    int num[2];// you can also take num1, num2... me just practising array arguments
    int size = sizeof(num) / sizeof(num[0]);
    for(int i = 0; i<2; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nmaximum value is %d\n",max(num,size));

    return 0;
}
