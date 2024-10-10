#include<stdio.h>

int main()
{
    int wt;
    printf("enter weight: ");
    scanf("%d",&wt);
    if(wt<115)
    {
        printf("\nFly Weight\n");
    }
    else if(wt>=115 && wt<=121)
    {
        printf("\nBantam Weight\n");
    }
else if(wt>=122 && wt<=155)
    {
        printf("\n\Feather Weightn");
    }
else if(wt>=154 && wt<=189)
    {
        printf("\nMiddle Heavy Weight\n");
    }
else if(wt>=190)
    {
        printf("\nHeavy Weight\n");
    }

    return 0;

}
