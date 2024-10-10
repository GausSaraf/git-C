//write_a_C_program_to_

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],copy[100];
    int i = 0, count = 0;
    printf("enter a string: \n");
    gets(ch);

    while(ch[i] != '\0')
    {
        count++;
        copy[i]=ch[i];
        i++;

    }

//count = strlen(ch);
    printf("\nThe entered string: ");
    puts(ch);
  printf("\nThe length of the string is %d",count);
   // strcpy(copy,ch);
    printf("\nThe copied string:\n");
    puts(copy);
    return 0;
}
