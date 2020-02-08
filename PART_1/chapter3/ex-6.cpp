#include <iostream>
using namespace std;

int main (void) {
    int i1,i2,i3;
    cout<<"Please enter three integers:  ";
    cin>>i1>>i2>>i3;
    if (i1 == i3)
        cout<<i1<<","<<i3<<","<<i2<<"\n";
    else
        cout<<i1<<","<<i2<<","<<i3<<"\n";
    return 0;
}
