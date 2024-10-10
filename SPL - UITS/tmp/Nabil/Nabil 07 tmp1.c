#include<stdio.h>

int main()

{
	float a,b,c;



	scanf ("%f%f%f", &a, &b, &c);

	if (a+b+c==180 && a!=0)
	{
		 printf("Valid");
	}



	else{
		printf("Wrong Information");
	}

return 0;

}