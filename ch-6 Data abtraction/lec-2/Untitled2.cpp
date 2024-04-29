#include<iostream>
using namespace std;
class circle{
	protected:
	int radius;
	public:
	virtual void dispcircle(){
		
		cout<<"enter of radius:-";
		cin>>radius;
	}
	virtual void calculate(){
			cout<<"erea of circle:-"<<3.14*radius*radius<<endl;
		}
};
class triangle : public circle{
	protected:
	int hight;
	int base;
	public:
	 void dispcircle(){
		
		cout<<"enter of hight:-";
		cin>>hight;
		
		cout<<"enter of base:-";
		cin>>base;
	
	}
		void calculate(){
			cout<<"Area of a triangle :- "<<0.5*base*hight<<endl;
		}	
		
	
};
class rectangle : public circle{
	protected:
		int length;
		int width;
	public:
		
		void dispcricle(){
			cout<<"Enter the length of a rectangle :- ";
			cin>>length;
			cout<<"Enter the value of width of a rectangle :- ";
			cin>>width;
		}
		void calculate(){
			cout<<"Area of a rectangle :- "<<length*width<<endl;
		}
};


int main()
{
	circle *c1;
	triangle t;
	rectangle r;
	
	
	c1 = &t;
	c1->dispcircle();
	c1->calculate();
	
	c1= &r;
	
	c1->dispcircle();
	c1->calculate();
	return 0;
	
}
