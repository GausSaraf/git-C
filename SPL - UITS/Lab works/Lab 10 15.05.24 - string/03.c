//write_a_C_program_to_

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
//char ch[]= "this is a string";
    printf("please type a string: \n");
    gets(ch);
    printf("you typed: \n");
    puts(ch);
    /*for(int i = 0;i<=strlen(ch);i++)
    {
       scanf("%c",&ch[i]);
    }*/

//printf("%s",ch);
// will only print the first word, %s counts spaces as null characters
    /*for(int i = 0;i<=strlen(ch);i++)
    {
       printf("%c",ch[i]);
    }*/
    return 0;
}
