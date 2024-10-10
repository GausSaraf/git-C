#include <stdio.h>
#include <string.h>

int main()
{
char ch[100];
printf("Input String: \n");
gets(ch);
strrev(ch);
printf("\n\nReverse of the String: \n");
puts(ch);
    return 0;
}
