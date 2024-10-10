//Identify profit or loss by taking input

#include<stdio.h>
int main ()
{
    float a,b;
    printf("\nEnter Income: ");
    scanf("%f", &a);
    printf("\nEnter Expense: ");
    scanf("%f", &b);



if(a>b)
    {
        printf("\n\nProfit!!\n\n");
    }
    else
    {
        printf("\n\nLoss!!\n\n");
    }


/*

//this is the mathematical approach

    if(a-b>0)
    {
        printf("\n\nProfit!!\n\n");
    }
    else
    {
        printf("\n\nLoss!!\n\n");
    }


*/

    return 0;
}

