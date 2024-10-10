
//how to separate decimals from float value
#include <stdio.h>
#include <math.h>

int main() {
  double N,x,y;
  scanf("%lf", &N);
  x = modf(N, &y);

    printf("%lf\n",y);
    printf("%lf\n",x);

    return 0;
}

/*
[ input ]
  12.23
[ output ]
  12.000000
  0.230000
*/
