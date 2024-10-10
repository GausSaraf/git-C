#include <stdio.h>

int main()
{
int n,m;
printf("Input n: ");
scanf("%d",&n);
printf("Input m: ");
scanf("%d",&m);
printf("\n\nnumbners 1 to n are:\n");
for(int i=1;i<=n;i++)
{
    printf("%d ",i);
}
printf("\n\nnumbners 1 to m are:\n");
for(int i=1;i<=m;i++)
{
    printf("%d ",i);
}
    return 0;
}
