// find max min between 3 numbers using ternary operator

#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    (a > b) ? (x = a, y = b) : (x = b, y = a);
    (x > c && y > c) ? (z = c) : ((c > x && c > y) ? (z = y, x = c) : (z = y));
    printf("max = %d\nmin = %d", x, z);

    // printf("%d %d", x,y);

    /*
    //this is the correct code provided by Sadia Ma'am

    (a>b && a>c)? printf("%d is maximum\n",a):((b>a && b>c)?printf("%d is maximum\n",b):printf("%d is maximum", c));
    (a<b && a<c)? printf("%d is minimum\n",a):((b>a && b>c)?printf("%d is minimum\n",b):printf("%d is minimum", c));

    */
    return 0;
}
