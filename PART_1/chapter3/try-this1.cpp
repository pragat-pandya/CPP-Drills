#include <iostream>
using namespace std;

int main (void) {
    double age;
    string name;
    cout<<"Please enter your name and age: \n";
    cin>>name>>age;
    cout<<"Hello, "<<name<<"(age "<<age*12<<" months)\n";
    return 0;
}
