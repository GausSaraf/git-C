//using ternary operator, find if the input number is Even of ODd


#include<stdio.h>

int main()
{
    int a;

    printf("Input a number for checking Even or Odd: ");

    scanf("%d", &a);

    a%2==0? printf("\nThe number is Even\n"):printf("\nThe number is Odd\n");

    return 0;

}

