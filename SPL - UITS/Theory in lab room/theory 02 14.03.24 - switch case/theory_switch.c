#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%d", &ch);

    if((ch>='A' && ch<='Z' || ch>='a' && ch<='z'))
    {
        switch(ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("character is a Vowel"); //can write only once for same printf()
          // Default ??

        }


    }


    return 0;

}

