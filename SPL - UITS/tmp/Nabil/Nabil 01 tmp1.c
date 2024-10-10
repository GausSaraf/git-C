#include<stdio.h>

int main()
{
  int x , y , z;

  scanf("%d%d%d",&x,&y,&z);

  if (x>y&&x>z)
  {
    printf("%d is Maximum\n",x);
  }
  else if (y>z&&y>x)
  {
    printf("%d is Maximum\n",y);
  }
  else
  {
    printf("%d is Maximum\n",z);
  }

  if (x<y&&x<z)
  {
    printf("%d is Minimum\n",x);
  }
  else if (y<z&&y<x)
  {
    printf ("%d is Minimum\n",y);
  }

  else
  {
    printf ("%d is Minimum\n",z);
  }

  return 0;
}