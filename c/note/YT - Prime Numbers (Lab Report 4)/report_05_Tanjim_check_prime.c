#include <stdio.h>
int main()
 {
    int number, i;
    scanf("%d", &number);
    for (i = 2; i * i <= number; i++)
     {
        if (number % i == 0) {
            printf("not prime");
            return 0;
        }
    }
    printf("prime");
   return 0;
}


