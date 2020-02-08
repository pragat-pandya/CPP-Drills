#include <iostream>
using namespace std;

int main (void) {
    double d;
    while (cin>>d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout<<"d=="<<d // Orignal float
            <<"i=="<<i // Float converted to int
            <<"c=="<<c // int converted to char
            <<"i2=="<<i2; // char converted to int
    }
    return 0;
}
