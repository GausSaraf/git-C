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
    /*
        while(ch[i] != '\0')
        {
            count++;
            copy[i]=ch[i];
            i++;
        }*/

//count = strlen(ch);
    /*  printf("\nThe entered string: ");
      puts(ch);
    printf("\nThe length of the string is %d",count);
     // strcpy(copy,ch);
      printf("\nThe copied string:\n");
      puts(copy);*/

    x = strcmp(ch,dest);
    if(x==0)
    {
        printf("\n Both string are the same");
    }
    else if(x>0)
    {
        printf("\n1st string is greater");
    }
    else
    {
        printf("\n2nd string is greater");
    }



    return 0;
}
