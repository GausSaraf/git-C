//write a C program to check whether a character is uppercase or lowercase alphabet

#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    {
        printf("the alphabet is in Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("the alphabet is in Lowercase");
    }
    else
    {
        printf("Please enter a valid alphabet"); //NULL
    }

    return 0;
}

