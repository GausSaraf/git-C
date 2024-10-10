#include<stdio.h>

int main()
{
    int id;
    printf("Input ID: \n");
    scanf("%d",&id);
    if(id<1 || id>25)
    {
        printf("\nINVALID\n");
    }
    else
    {
        if(id%2==0)
        {
            printf("\nStudent is in group B\n");
        }
        else
        {
            printf("\nStudent is in group A\n");
        }
    }
    return 0;

}
