#include<stdio.h>

int main()
{
    int math, physics, chemistry;
    printf("Math marks: ");
    scanf("%d",&math);
    printf("Physics marks: ");
    scanf("%d",&physics);
    printf("Chemistry marks: ");
    scanf("%d",&chemistry);
    //alternative: set first 3 as initial conditions
    //math>=60 && physics>=50 && chemistry>=40
    //and set 4th and after 'or' as seperate conditions
    //math+physics+chemistry>=200
    if(math>=60 && physics>=50 && chemistry>=40 && math+physics+chemistry>=200)
    {
        printf("Eligible");
    }
    else if(math+physics>=150)
    {
        printf("Eligible");
    }
    else
    {
        printf("Ineligible");
    }
    return 0;

}
