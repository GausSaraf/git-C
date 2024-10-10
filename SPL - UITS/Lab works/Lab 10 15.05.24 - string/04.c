//write_a_C_program_to_

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int i = 0, count = 0;
    printf("enter a string: \n");
    gets(ch);
ch[4] = '\0';
    /*
    while(ch[i] != '\0')
    {
        count++;
        i++;
    }
*/
    printf("\nThe entered string: ");
    puts(ch);
    //printf("\nThe length of the string is %d",count);
    printf("\nThe length of the string is %d",strlen(ch));
    return 0;
}
