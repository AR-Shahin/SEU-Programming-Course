

#include <iostream>
using namespace std;

int main()
{
    double salary,mw,hw,ex,total; 
    cout<<"Enter Salary : ";
    cin>>salary;

    hw = salary * 0.3;
    mw = salary * 0.05;
    ex = 1000;

    total = salary + hw + mw + ex;

    cout<<"Gross Salary " <<total;
    return 0;
}
