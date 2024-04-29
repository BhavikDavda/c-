#include <iostream>
using namespace std;


class Mother {
	public:
    void dispa() 
	{
        cout<<"where are you?"<< endl;
    }
};


class Daughter : public Mother {
	public:
    void dispb() 
	{
        cout <<"i am from america..."<< endl;
    }
};

int main() 
{
   
    Daughter d1;

    
    d1.dispb();

    return 0;
}

