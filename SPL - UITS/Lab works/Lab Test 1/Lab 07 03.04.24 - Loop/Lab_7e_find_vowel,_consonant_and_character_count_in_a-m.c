//find vowel, consonant and character count in a-m

#include<stdio.h>

int main()
{
    char ch;
    int count1=0,count2=0,count3=0;
    //scanf("%c", &ch);
    for(ch='a'; ch<='m'; ch++)
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
        count3++;
    }
        printf("\n\nVowels found %d\n\nConsonants found %d\n\nTotal characters %d\n",count1,count2,count3);

    return 0;
}
