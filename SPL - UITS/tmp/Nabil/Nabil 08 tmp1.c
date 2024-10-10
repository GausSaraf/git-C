#include<stdio.h>

int main()

{
	int n,result, phy,che,math,bio,com;



	scanf ("%d%d%d%d%d" , &phy, &che, &math, &bio, &com);
		n=phy+che+math+bio+com;

	  result=n/5;

	if (result>=90 && result<=100)
	{
		 printf("A Grade");
	}

	else if (result>80 &&result<90)
	{
		printf("B Grade");
	}

	else if (result>=70 &&result<80)
	{
		printf("C Grade");
	}

	else if (result>=60 &&result<70)
	{
		printf("D Grade");
	}

	else if (result>=40 &&result<60)
	{
		printf("E Grade");
	}

	else
	{
		printf("Fail");
	}

return 0;
}