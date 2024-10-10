#include <stdio.h>

int main()
{
    int a,b,x;
    printf("Input 2 numbers: \n");
    scanf("%d%d",&a,&b);
    printf("\nSelect the operation you want to do:\n");
    printf("\nType 1 for Addition\nType 2 for Subtraction\nType 3 for Multiplication\nType 4 for Division\n");
    printf("\nInput: ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\nAddition = %d + %d = %d\n",a,b,a+b);
        break;
    case 2:
        printf("\nSubtraction = %d - %d = %d\n",a,b,a-b);
        break;
    case 3:
        printf("\nMultiplication = %d * %d = %d\n",a,b,a*b);
        break;
    case 4:
        printf("\nDivision = %d / %d = %d\n",a,b,a/b);
        break;
    default:
        printf("\nINVALID INPUT\n");
    }

    return 0;
}
