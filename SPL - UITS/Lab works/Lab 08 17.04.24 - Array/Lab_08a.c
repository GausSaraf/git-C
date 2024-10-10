//sum,deduct,product,divide using array

#include <stdio.h>

int main()
{
    int a[10];
    scanf("%d%d", &a[0],&a[1]);
    printf("Sum = %d\n", a[0]+a[1]);
    printf("Deduct = %d\n", a[0]-a[1]);
    printf("Product = %d\n", a[0]*a[1]);
    printf("Divide = %d\n", a[0]/a[1]);


    return 0;
}
