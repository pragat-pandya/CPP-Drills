#include <iostream>
using namespace std;

int main (void) {
    int val1,val2;
    cout<<"Please insert two integers val1 and val2:  ";
    cin>>val1>>val2;
    if (val1 > val2)
        cout<<"Val1 is greaterthan val2\n";
    else
        cout<<"Val1 is lessthan val2\n";
    cout<<"The sum, diffrence, product and ratio of both values are "
        <<val1+val2<<", "<<val1-val2<<", "<<val1*val2<<", "
        <<val1/val2<<" respectively\n";
    return 0;
}
