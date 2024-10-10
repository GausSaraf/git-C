//biggest value between 5 numbers

#include <stdio.h>

int main()
{
    int n[6], max,i;
    for(int i = 1; i<=5; i++)
    {
        scanf("%d", &n[i]);
    }

    //let's suppose

    max = n[1];

    //every time there is a mismatch, max number changes

    for(i=2; i<=5; i++)
    {
        if(max<n[i])
        {
            max = n[i];
        }
    }


    printf("Biggest = %d\n", max);



    return 0;
}

/*
if(n[1]>n[2] && n[1]>n[3] && n[1]>n[4] && n[1]>n[5])
    {
        s[1]=n[1];

    }
    else if(n[2]>n[3] && n[2]>n[4] && n[2]>n[5] && n[2]>n[1])
    {
        s[1]=n[2];

    }
    else if(n[3]>n[4] && n[3]>n[5] && n[3]>n[1] && n[3]>n[2])
    {
        s[1]=n[3];

    }
    else if(n[4]>n[5] && n[4]>n[1] && n[4]>n[2] && n[4]>n[3])
    {
        s[1]=n[4];

    }
    else if(n[5]>n[1] && n[5]>n[2] && n[5]>n[3] && n[5]>n[4])
    {
        s[1]=n[5];

    }
*/



/*
for(int i = 1; i<=5; i++)
    {
        if(n[i]>n[5-i])
        {
            s[i]=n[i];
        }
        else if(n[i]<n[5-i])
        {
            s[i]=n[5-i];
        }

    }
*/
