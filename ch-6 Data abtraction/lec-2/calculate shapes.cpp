#include<iostream>
using namespace std;

class bhavik{
	protected:
		int radius;
		int length;
		int width;
		int height;
		int base;
		
};

class circle : public bhavik{
	public:
	void dispa(){
			cout<<"Enter the radius of a circle :- ";
			cin>>radius;
		}
		void  calculate(){
			cout<<"Area of a circle :- "<<3.14*radius*radius<<endl;
		}
};

class triangle : public bhavik{
	public:
		virtual dispba(){
			cout<<"Enter the height of a triangle :- ";
			cin>>height;
			cout<<"Enter the value of base of a triangle :- ";
			cin>>base;
		}
		void calculate(){
			cout<<"Area of a triangle :- "<<0.5*base*height<<endl;
		}
};

class rectangle : public bhavik{
	public:
		virtual dispa(){
			cout<<"Enter the length of a rectangle :- ";
			cin>>length;
			cout<<"Enter the value of width of a rectangle :- ";
			cin>>width;
		}
		void calculate(){
			cout<<"Area of a rectangle :- "<<length*width<<endl;
		}
};
	
int main(){
	circle *c1;
	triangle c;
	rectangle c;
	
	c1 =&c;
	c1 =&c;
	
	c1->dispa();
	c1->calculate();
	
	
	
	return 0;
}
