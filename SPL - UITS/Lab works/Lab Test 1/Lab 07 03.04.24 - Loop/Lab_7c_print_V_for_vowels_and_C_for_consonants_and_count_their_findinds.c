//print V for vowels and C for consonants and count their findinds

#include<stdio.h>

int main()
{
    char ch;
    int count1=0,count2=0;
    //scanf("%c", &ch);
    for(ch='a'; ch<='z'; ch++)
    {
        if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
        {
            printf("V for %c\n",ch);
            count1++;
        }
        else
        {
            printf("C for %c\n",ch);
            count2++;
        }
    }
        printf("\n\nVowels found %d\n\nConsonants found %d\n",count1,count2);

    return 0;
}
