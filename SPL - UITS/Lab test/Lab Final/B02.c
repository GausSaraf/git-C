#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
int vowel=0,consonant=0,x;
printf("Type the string: ");
gets(str);
strlwr(str);
x = strlen(str);
//printf("%d",x);
for(int i = 0; i <=x;i++)
{
    if(str[i]>='a' && str[i]<='z')
    {

    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        vowel++;
    }
    else
    {
        consonant++;
    }
    }
}
printf("Vowels are %d\nConsonants are %d\n",vowel,consonant);


    return 0;
}
