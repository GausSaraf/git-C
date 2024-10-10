#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
int Cvowel=0,Cconsonant=0,Lvowel=0,Lconsonant=0,x;
printf("Type the string: ");
gets(str);
//strlwr(str);
x = strlen(str);
for(int i = 0; i <=x;i++)
{
    if(str[i]>='A' && str[i]<='Z')
    {

    if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        Cvowel++;
    }
    else
    {
        Cconsonant++;
    }
    }
    else if(str[i]>='a' && str[i]<='z')
    {

    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
        Lvowel++;
    }
    else
    {
        Lconsonant++;
    }
    }
}
printf("\n\nCapital Letter\n- Vowels are %d\n- Consonants are %d\n\n",Cvowel,Cconsonant);
printf("Lower Letter\n- Vowels are %d\n- Consonants are %d\n",Lvowel,Lconsonant);


    return 0;
}
