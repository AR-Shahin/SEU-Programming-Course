

#include <stdio.h>

int main()
{

    double salary,mw,hw,ex,total;
    printf("Enter Basic Salary : ");
    scanf("%lf",&salary);

    hw = salary * 0.3;
    mw = salary * 0.05;
    ex = 1000;

    total = salary + hw + mw + ex;
    printf("Gross Salary : %lf",total);
    return 0;
}
