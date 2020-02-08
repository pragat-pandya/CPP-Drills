#include <iostream>
using namespace std;

int main (void) {
    int i;
    cout<<"Please enter an interger:  ";
    cin>>i;
    if (i % 2 == 0)
        cout<<"Given value '"<<i<<"' is even.\n";
    else
        cout<<"Given value '"<<i<<"' is odd.\n";
    return 0;
}
