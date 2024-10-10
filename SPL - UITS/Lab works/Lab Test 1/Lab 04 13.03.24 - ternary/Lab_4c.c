//check whether a character is an alphabet or not (using ternary operator)

#include <stdio.h>


int main()
{
    char ch;
    scanf("%c", &ch);

    (ch>='A' && ch>='Z' || ch>='a' && ch>='z')? printf("character is alphabet"): printf("character is not an alphabet");
    return 0;


}

