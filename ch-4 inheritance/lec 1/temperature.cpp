#include<iostream>
using namespace std;

class p{
	public:
		float celcius;
		
		
	void setdata(){
		
		cout<<"ENTER TEMPERATURE IN CELCIUS = ";
		cin>>celcius;
		
	}	
};

class q : public p{
	public:
		disp(){
			float fahrenheit=0;
			
			fahrenheit=celcius*9/5 +32;
			cout<<"TEMPERATURE IN fahrenheit = "<<fahrenheit<<endl;
			
		}
		
};

class r :  public q{
	public:
		getdata(){
			float KELVIN=0;
			
			KELVIN=celcius+273.15;
			cout<<"TEMPERATURE IN KELVIN  = "<<KELVIN<<endl;
		}
};

int main()
{
	r a;
	
	a.setdata();
	a.disp();
	a.getdata();
	
	return 0;
}
