#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int alph =0,dig =0,spec = 0;
    printf("Input string: ");
    gets(ch);
    strlwr(ch);
//upper lower case does not matter here
    for(int i = 0; i<=strlen(ch); i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            alph++;
        }
        else if(ch[i]>='0' && ch[i]<='9')
        {
            dig++;
        }
        else
        {
            if(ch[i]!=' ' && ch[i]!='\0')
            {
               spec++;
            }
        }

    }
    printf("\nTotal number of,\nalphabets = %d\ndigits = %d\nspecial characters = %d\n",alph,dig,spec);
    return 0;
}
