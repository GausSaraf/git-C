//write a C program to input angles of a triangle and check whether triangle is valid or not

/*
Issue:
check validity for inputs
95 25 60 (You can't draw it)
120 30 30 (if you condition it for the previous one, this doesn't work)

*/



#include<stdio.h>
int main ()
{
    float a,b,c; //can take int as well
    scanf("%f %f %f", &a,&b,&c);

    if(a+b+c==180 && a!=0 && b!=0 && c!=0 )
    
//if(a>0 && a<=90 && b>0 && b<=90 && c>0 && c<=90)
//else if(a>0 && a<180 && b>0 && b<=90 && c>0 && c<=90)
    { 
        {printf("Triangle is valid");}
    }
    else
    {
         printf("Triangle is NOT valid");
    }

    return 0;
}
