#include <stdio.h>
#include <string.h>

float calc(float count, float price)
{
    float total, cost;
    total = count*price;
    cost = total*10/100 +50 + total;
    printf("\n\nYou need to pay tk %.2f\n",cost);


    return total;
}

int main()
{
    printf("Welcome, User. Please cooperate....\n\n");
    char title[100];
    float count, price,total,cost;
    printf("Book Title?\n= ");
    gets(title);
    printf("Quantity?\n= ");
    scanf("%f",&count);
    printf("Price per Book?\n= ");
    scanf("%f",&price);

 printf("\n\n[ Tax included 10%% on Total amount (%.2f) ]\n[ Shippin Charge is tk 50 ]\n",calc(count,price)*10/100);
    //puts(title);
    return 0;
}
