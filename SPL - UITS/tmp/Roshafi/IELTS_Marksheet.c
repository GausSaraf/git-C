#include<stdio.h>
int main()
{
    printf("ILTS skill test\n");
    printf ("Enter Your Exam Points\n ");
    float speaking,listing,reading,writing;
    printf("Enter the number of test 1: \n");
    scanf ("%f",&speaking);
    printf("Enter the number of test 2:\n ");
    scanf ("%f",&listing);
    printf("Enter the number of test 3: \n");
    scanf ("%f",&reading);
    printf("Enter the number of test 4:\n");
    scanf ("%f",&writing);

    double total_mark  = speaking+listing+reading+writing;
    double ovaralskill =  total_mark / 4 ;

    printf ("total achived mark = %.2lf\n",total_mark);
    printf ("avarege achived point= %.2lf\n",ovaralskill);

    // double ovaralskill;

    if (ovaralskill>=9 && ovaralskill <=10)
    {
        ovaralskill ='USA';
    }
    else if (ovaralskill>=7 && ovaralskill <=8)
    {
        ovaralskill ='finland';
    }
    else
    {
        ovaralskill='NON';

    }
    printf("your selected for :%.2lf",ovaralskill);

return 0;
}
