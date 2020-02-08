#include <iostream>
using namespace std;

int main (void) {
    string str;
    while (cin>>str) {
        if (str == "zero")
            cout<<"0\n";
        else if (str == "one")
            cout<<"1\n";
        else if (str == "two")
            cout<<"2\n";
        else if (str == "three")
            cout<<"3\n";
        else if (str == "four")
            cout<<"4\n";
        else
            cout<<"Not a number I know\n";
        return 0;
    }
}
// This exact same task can be done more speedily with switch statement
// But switch statements aren't introduced in the text, yet.
