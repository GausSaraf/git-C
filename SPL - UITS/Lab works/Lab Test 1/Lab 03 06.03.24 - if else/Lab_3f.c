//write a C program to check whether a character is an alphabet, digit or special character
//Special Characters (32-47 / 58-64 / 91-96 / 123-126)


#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        printf("the character is an Alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("the character is a Digit");
    }

    else if(ch>=32 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126)
    {
        printf("the character is a Special Character");
    }
    else
    {
        printf("NULL");
    }

    return 0;
}
