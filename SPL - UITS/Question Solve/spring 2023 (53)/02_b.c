#include <stdio.h>

int main()
{
int a,b;

printf("Input 2 numbers:\n");
scanf("%d%d",&a,&b);
int *pA= &a,*pB= &b;
printf("\nMultiplication of the numbers is,\n%d * %d = %d",a,b,*pA**pB);


    return 0;
}
