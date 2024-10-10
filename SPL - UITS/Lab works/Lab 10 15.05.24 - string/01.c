//write_a_C_program_to_take_5_values_as_input_in_array_and_print_the_entered_values_from_that_array

#include <stdio.h>
int main()
{
    int num[5],i;
    for(i = 0; i<=4;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i = 0; i<=4;i++)
    {
        printf("%d\n",num[i]);
    }

    return 0;
}
