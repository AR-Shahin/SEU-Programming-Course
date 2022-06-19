

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;

    str = n % 2 == 0 ? "Even" : "Odd";

    cout<<str;
    return 0;
}
