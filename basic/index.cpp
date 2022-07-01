#include<iostream>
// #include<conio.h>
using namespace std;

int main()
{
    int num , r , temp , sum =0;

    cout << "Enter some digits =";
    cin >> num;

    temp =num;
    

    while(temp>0)
    {
        r   = temp%10;
        sum = sum*10+r;
        temp= temp/10;
    }
    cout << "sum of digits =" << sum;

    // getch();
}