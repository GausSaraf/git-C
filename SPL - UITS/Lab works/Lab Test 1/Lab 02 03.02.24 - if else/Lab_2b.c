
//check a triangle is valid or not by taking 3 angles of triangle

#include<stdio.h>
int main ()
{
    int a,b,c; // can also take float
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c==180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}
