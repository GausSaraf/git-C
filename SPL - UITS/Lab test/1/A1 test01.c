#include<stdio.h>

int main()
{
    int num1,num2,choice;
    printf("Input 1st Number: \n");
    scanf("%d",&num1);
    printf("Input 2nd Number: \n");
    scanf("%d",&num2);
    printf("Input choice: \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nAddition: %d + %d = %d\n",num1,num2,num1+num2);
    }
    else if(choice==2)
    {
        printf("\nSubtraction: %d - %d = %d\n",num1,num2,num1-num2);
    }
    else if(choice==3)
    {
        printf("\nMultiplication: %d x %d = %d\n",num1,num2,num1*num2);
    }
    else
    {
        printf("\nERROR\n");
    }
    return 0;
}
