#include <stdio.h>

int main()
{

int i;
for(i=1;i<=10;i++)
{
    if(i==5)
    {
        continue;
        //keyword for SKIP
        //also can use printf("");
    }
    printf("%d ",i);
}


    return 0;
}
