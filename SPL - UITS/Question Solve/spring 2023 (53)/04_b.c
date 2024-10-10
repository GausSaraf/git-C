#include <stdio.h>

int main()
{
char ch;
scanf("%c",&ch);
switch(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
case 1:
    printf("Charater is a Vowel\n");
    break;
case 0:
    printf("Charater is a Consonant\n");
    break;
}
    return 0;
}
