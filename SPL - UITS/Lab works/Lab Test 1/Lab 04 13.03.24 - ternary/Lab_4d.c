// check if a character is vowel or consonant
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    (ch>='A' && ch>='Z' || ch>='a' && ch>='z')?((ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')? printf("The character is a vowel"):printf("The character is a consonant")): printf("Not Alphabet");

    return 0;


}

