#include<stdio.h>

int sum(int a, int b) // function with body
{
    printf("\nI am from SUM function\n");
    int result=a+b;
    return result;
}

int sub(int a, int b)
{
    printf("\nI am from SUB function\n");
    int result=a-b;
    return result;
}

int Multiplication(int a, int b)
{
    printf("\nI am from Multiplication function\n");
    int result=a*b;
    return result;
}

int Division(int a, int b)
{
    printf("\nI am from Division function\n");
    int result=a/b;
    return result;
}

int main()
{
    printf("\nI am from Main function\n");

    int a,b,result;
    int r1,r2,r3,r4;
    scanf("%d %d", &a,&b);

    r1 = sum(a,b); // function call
    printf("\nThe value of summation is: %d\n",r1);

    r2 = sub(a,b); // function call
    printf("\nThe value of subtraction is: %d\n",r2);

    r3 = Multiplication(a,b);
    printf("\nThe value of Multiplication is: %d\n",r3);

    r4 = Division(a,b);
    printf("\nThe value of Division is: %d\n",r4);

    return 0;
}
