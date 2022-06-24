

#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    char op;

    cin>>num1>>num2>>op;

    switch(op){
        case '+':
        cout<<num1 + num2;
        break;
        case '-':
            cout<<num1 - num2;
            break;
        case '*':
            cout<<num1 * num2;
            break;
        case '/':
            cout<<num1 / num2;
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}
