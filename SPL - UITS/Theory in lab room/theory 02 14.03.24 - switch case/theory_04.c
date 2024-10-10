#include<stdio.h>

int main()
{
    int num;
    printf("Enter number to find +ve/-ve: ");
    scanf("%d", &num);

    switch(num==0)
    {
    case 1:
        printf("Zero");
        break;
    case 0:
        switch(num>0)
        {

        case 1:
            printf("Positive");
            break;
        default:
            printf("Negative");
            //break;
        }

    }
    return 0;

}
