//write_a_C_program_to_take_5_values_into_2_arrays_A_and_B
//and_the_third_array_will_be_calculated_from_the_given_2_arrays_like_B-A

#include <stdio.h>
int main()
{
    int A[5],B[5],C[5],i;
    printf("input 1st array: \n");
    for(i = 0; i<=4;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("input 2nd array: \n");
    for(i = 0; i<=4;i++)
    {
        scanf("%d",&B[i]);
        C[i]=B[i]-A[i];
    }
    printf("third array will be:\n");
    for(i = 0; i<=4;i++)
    {
        printf("%d ",C[i]);
    }

    return 0;
}
