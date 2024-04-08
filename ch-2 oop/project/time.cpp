#include <iostream>
using namespace std;

class Time {
public:
    int hours1;
    int minutes1;
    int hours2;
    int minutes2;
    int totalhours;
    int totalminutes;
}; 

int main() 
{
    Time time;
    
    cout<<"Enter The First Time:-"<<endl;
    cout<<"Hours: ";
    cin>>time.hours1;
    cout<<"Minutes: ";
    cin>>time.minutes1;
    

    cout<<"Enter The Second Time:-"<<endl;
    cout<<"Hours: ";
    cin>>time.hours2;
    cout<<"Minutes: ";
    cin>>time.minutes2;
    
    
    time.totalminutes = time.minutes1 + time.minutes2;
    time.totalhours = time.hours1 + time.hours2 + (time.totalminutes / 60);
    time.totalminutes = time.totalminutes % 60;
    
    
    cout<<"The total times is:"<<endl;
    cout<<"Hours: "<<time.totalhours<<endl;
    cout<<"Minutes: "<<time.totalminutes<<endl;
    
    return 0;
}

