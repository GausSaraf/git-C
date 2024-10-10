//5+10+15... up to 75 terms and sum

#include<stdio.h>

int main()
{
    //int sum = 0,i = 5,n = 75, till = 375;
    long int sum = 0,i = 5,n = 75, count =0;
    //printf("75 terms end the series in 375\n\n");
    printf("Sum = ");
    for(i=5; i>=0; i=i+5)
    {
        printf("%ld ",i);
        sum = sum + i;
        count++;
        if(count==75)
        {
break;


        }
    }
    printf("= %ld\n\n",sum);

    return 0;
}

