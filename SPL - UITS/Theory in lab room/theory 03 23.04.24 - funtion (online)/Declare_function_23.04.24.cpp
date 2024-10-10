#include<stdio.h>

int sum(); //function prototype , function name declaration
int  sub();
int Multiplication();
int Division();

int main()
{

    printf("\n I am from Main function");
    sub(); // function call
    sum();
    //  sub();
    Multiplication();
    Division();
    //sub();

    return 0;
}

int sum() // function with body
{
    printf("\n I am from function SUM ");
    int a,b,result;
    scanf("%d %d", &a,&b);
    result=a+b;
    printf("\n The value of summation is: %d",result);

    return 0;
}

int  sub()
{
    printf("\n I am from function SUBtraction \n");
    int x,y,result; // local variable
    scanf("%d %d", &x,&y);
    result=x-y;
    printf("\n The value of subtraction is: %d",result);
    return 0;
}


int Multiplication()
{
    printf("\n I am from function Multiplication ");
 int x,y,result; // local variable
    scanf("%d %d", &x,&y);
    result=x*y;
    printf("\n The value of Multiplication is: %d",result);
    return 0;
}

int Division()
{
    printf("\n I am from function Division ");
     int x,y,result; // local variable
    scanf("%d %d", &x,&y);
    result=x/y;
    printf("\n The value of Division is: %d",result);
    return 0;
}
/*
int main()
{

    printf("\n I am from Main function");
    sub(); // function call
    sum();
    //  sub();
    //Multiplication();
    sub();

    return 0;
}

*/

