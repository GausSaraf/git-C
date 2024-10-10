#include<stdio.h>

int sum(); //function prototype , function name declaration
int sub(int a, int b);
int Multiplication();
int Division();

int main()
{
    printf("\n I am from Main function");

    int x,y,res;//local variable of main function
    printf("\n Please enter 2 values: ");
    scanf("%d %d",&x,&y);

    //sub() // function call
    res = sub(x,y); // call by value
    printf("\n The value of subtraction is : %d", res);

    return 0;
}

int sum() // function with body
{
    printf("\n I am from function SUM ");
    int a,b,result; //local
    scanf("%d %d", &a,&b);
    result=a+b;
    printf("\n The value of summation is: %d",result);

    return 0;
}

int  sub(int a, int b )
{
    printf("\n I am from function SUBStraction \n");
    //int x,y,result; // local variable
    //scanf("%d %d", &x,&y);
    int result;
    result=a-b;
    //printf("\n The value of substraction is: %d",result);
    return result;
}

int Multiplication()
{
    printf("\n I am from function Multiplication ");
    int x,y,result; // local variable
    scanf("%d %d", &x,&y);
    result=x*y;
    printf("\n The value of multiplication is: %d",result);
    return 0;
}

int Division()
{
    printf("\n I am from function Division ");
    int x,y,result; // local variable
    scanf("%d %d", &x,&y);
    result=x/y;
    printf("\n The value of division is: %d",result);
    return 0;
}



