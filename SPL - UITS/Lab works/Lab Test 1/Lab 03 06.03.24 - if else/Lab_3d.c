//write a C program to input any alphabet and check whether is is between 'k' to 'o'

#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='k' && ch<='o')
    {
        printf("the alphabet is between 'k' and 'o'");
    }
    else{printf("the alphabet is NOT between 'k' and 'o'");}

    return 0;
}

