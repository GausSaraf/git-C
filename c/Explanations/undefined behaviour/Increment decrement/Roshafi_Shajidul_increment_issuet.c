#include <stdio.h>
int main()
{
    int result, a = 5;
    printf("%d\n",result);
    result = a + ++a + a++;
    printf("%d\n",result);

    return 0;
}
