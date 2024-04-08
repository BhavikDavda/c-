#include<iostream>
using namespace std;
class Distance{
	public:
		int inch;
		int feet;
};
int main()
{
	Distance d1,d2,d3;
	
	cout<<"Enter d1 Distance:- "<<endl;
	cout<<"Feet:- "<<;
	cin>>d1.feet;
	cout<<"Inch:- "<<;
	cin>>d1.inch;
	
	cout<<"Enter d2 Distance:- "<<endl;
	cout<<"Feet:- ";
	cin>>d2.feet;
	cout<<"Inch:- ";
	cin>>d2.inch;
	
	d3.inch = d1.inch + d2.inch;
	d3.feet = d1.feet + d2.feet+(d3.inch / 12);
	d3.inch = d3.inch % 12;
	
	
	cout<<"Total distance: "<<d3.feet<<"feet"<<d3.inch<<" inches"<< endl;

	return 0;
}

