#include <iostream>
using namespace std;

int main (void) {
    string str1,str2,str3;
    cout<<"Please enter three integers:  ";
    cin>>str1>>str2>>str3;
    if (str1 == str3)
        cout<<str1<<","<<str3<<","<<str2<<"\n";
    else
        cout<<str1<<","<<str2<<","<<str3<<"\n";
    return 0;
}
