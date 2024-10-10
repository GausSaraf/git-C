//finding average of 50 student's numbers

#include <stdio.h>

int main()
{
    int s[5],sum = 0;
    float avg;
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&s[i]);
    /*
    }
    for(int i = 0; i<5; i++)
    {
    */
        sum = sum + s[i];
    }
    avg = (sum)/5;
    printf("avg = %.1f",avg);


    return 0;
}
/*
{
int s1,s2,s3,s4,s5;
    float avg;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    avg = (s1+s2+s3+s4+s5)/5;
    printf("avg = %.1f",avg);

    }

    */
