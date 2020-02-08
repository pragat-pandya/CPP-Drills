#include <iostream>
using namespace std;

int main (void) {
    cout<<"Please input a binary arithmatic operation followed by two operands:  ";
    string operation;
    double op1,op2;
    cin>>operation;
    cin>>op1>>op2;
    if (operation == "+")
        cout<<op1+op2<<"\n";
    else if (operation == "-")
        cout<<op1-op2<<"\n";
    else if (operation == "*")
        cout<<op1*op2<<"\n";
    else if (operation == "/")
        cout<<op1/op2<<"\n";
    else
        cout<<"Not an operation that I know :(\n";
    return 0;
}
