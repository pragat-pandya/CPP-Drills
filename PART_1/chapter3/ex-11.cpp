#include <iostream>
using namespace std;

int main (void) {
    int pennies, nickels, dimes, quater, half, one;
    cout<<"How many pennies do you have?: ";
    cin>>pennies;
    cout<<"How many nickels do you have?: ";
    cin>>nickels;
    cout<<"How many dimes do you have?: ";
    cin>>dimes;
    cout<<"How many quater do you have?: ";
    cin>>quater;
    cout<<"How many half dollars do you have?: ";
    cin>>half;
    cout<<"How many one dollars do you have?: ";
    cin>>one;
    cout<<"You have "<<pennies<<" pennies.\n"
        <<"You have "<<nickels<<" nickels.\n"
        <<"You have "<<dimes<<" dimes.\n"
        <<"You have "<<quater<<" quaters.\n"
        <<"You have "<<half<<" half dollars.\n"
        <<"You have "<<pennies+nickels*5+quater*25+dimes*10+half*50+one*100
        <<" cents\n";
    return 0;


}
