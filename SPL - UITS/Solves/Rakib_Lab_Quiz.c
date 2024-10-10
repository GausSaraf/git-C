#include <stdio.h>
int main()
{
	printf("\nMenu:\n(1) Water - 10 tk\n(2) Coffee - 30 tk\n(3) Lacchi - 20 tk\n\n(0) Done ordering!\n___________\n\norder code (1/2/3/0):\n\n");
	// int a, b, c, sum = 0;
	// int a[] = {10, 30, 20}, x, y, z, i, sum = 0;
	int a[] = {10, 30, 20}, b[10], i, sum = 0;

	scanf("%d", &b[0]);

	if (b[0] == 0)
	{
		printf("Total bill is: %d", sum);
	}
	else //if (b[0] != 0)
	{
		scanf("%d%d",&b[1], &b[2]);
		for (i = 0; i <= 2; i++)
		{
			if (b[i] == 1)
			{
				sum = sum + a[0];
			}
			else if (b[i] == 2)
			{
				sum = sum + a[1];
			}
			else if (b[i] == 3)
			{
				sum = sum + a[2];
			}
		}
		printf("Total bill is: %d", sum);
	}

	/*
		for (i = 1; i < 4; i++)
		{
			scanf("%d", &x);
			if (x >= 0 && x <= 3)
			{

				if (x == 0)
				{
					printf("Total bill is: %d", sum);
				}
				else if (x == 1)
				{
					sum = sum + a[0];
				}
				else if (x == 2)
				{
					sum = sum + a[1];
				}
				else if (x == 3)
				{
					sum = sum + a[2];
				}

				else
				{
					printf("Plase try again!!");
				}
			}
		}
		printf("Total bill is: %d", sum);
	*/

	return 0;
}

/*
if (b[1] == 1)
	{
		sum = sum + a[0];
		if (b[2] == 1)
		{
			sum = sum + a[0];
		}
		else if (b[2] == 2)
		{
			sum = sum + a[1];
		}
		else if (b[2] == 3)
		{
			sum = sum + a[2];
		}
	}
	else if (b[1] == 2)
	{
		sum = sum + a[1];
		if (b[2] == 1)
		{
			sum = sum + a[0];
		}
		else if (b[2] == 2)
		{
			sum = sum + a[1];
		}
		else if (b[2] == 3)
		{
			sum = sum + a[2];
		}
	}
	else if (b[1] == 3)
	{
		sum = sum + a[2];
		if (b[2] == 1)
		{
			sum = sum + a[0];
		}
		else if (b[2] == 2)
		{
			sum = sum + a[1];
		}
		else if (b[2] == 3)
		{
			sum = sum + a[2];
		}
	}
*/