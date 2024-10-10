#include<stdio.h>

int main()
{
    int num;
    printf("Enter number to find Even/Odd: ");
    scanf("%d", &num);

    switch(num%2==0)
    {
    case 1:
        printf("Even");
        break;
    default:
        printf("Odd");
    }
    return 0;

}

