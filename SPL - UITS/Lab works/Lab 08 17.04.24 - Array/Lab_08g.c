//write a c program to find 'a' in char array {string} "Bangladesh"
//replace 'a' with 'z' and print the new array

#include <stdio.h>

int main()
{
    char find='a', ch[30]="Bangladesh";
    int count = 0, flag = -1;

    for(int i = 0; i <10; i++)
    {
        if(ch[i]=='a')
        {
            ch[i]='z';

        }
    }
    for(int i = 0; i <10; i++)
    {
        printf("%c", ch[i]);
    }


    //printf("%s", ch);




    return 0;
}
