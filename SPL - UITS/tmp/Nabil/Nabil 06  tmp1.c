#include<stdio.h>

int main()

{
	char n;


	scanf ("%c" , &n);

	if (n>='a' && n<='z')
	{
		 printf("Lower Case");
	}
	else if( n>='A' && n<='Z'){
		printf("Upper Case");
	}

	else{
		printf("Wrong Information");
	}

return 0;

}