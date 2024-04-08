#include<iostream>
using namespace std;

class TimeConvert{
public:
    int hours;
    int minutes;
    int seconds;
};

int main() {
    TimeConvert convert;

    cout<<"Enter Seconds:- "<<endl;
    cin>>convert.seconds;

    int total_Seconds=convert.seconds;

    convert.hours = total_Seconds/3600;
    total_Seconds%=3600;
    convert.minutes = total_Seconds/60;
    convert.seconds = total_Seconds%60;

    
    cout<<convert.hours<<":"<<convert.minutes<<":"<<convert.seconds<<endl;

    return 0;
}

