#include<stdio.h>

int main()

{
	char a;


	scanf ("%c" , &a);

	if (a>='A'&&a<='z')
	{
		 printf("Alphabet");
	}
	else if (a>='0'&&a<='9')
	{
		printf("Digit");
	}
	else {
		printf("Symbol");
	}

return 0;

}