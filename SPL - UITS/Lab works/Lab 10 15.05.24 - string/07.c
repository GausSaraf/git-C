//write_a_C_program_to_

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],copy[100],dest[100];
    int i = 0, count = 0,x;
    printf("enter a string: \n");
    gets(ch);
    printf("enter another string: \n");
    gets(dest);

    printf("\nString concatanate: %s",strcat(ch,dest));
    printf("\nString reverse: %s",strrev(dest));



    return 0;
}
