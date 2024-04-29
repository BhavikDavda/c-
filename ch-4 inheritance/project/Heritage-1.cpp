#include<iostream>
using namespace std;

class shape{
	public:
		int width;
		int height;
		
		dispA()
		{
			
			cout<<"Enter of widht = ";
			cin>>width;
			cout<<"Enter of height = ";
			cin>>height;
			
		}
};

class triangle : public shape{
		public:
		int area;
	
		
			dispB()
			{
				area = 0.5*width*height;
				cout<<"AREA OF TRIANGLE = "<<area<<endl;	
			}	
};

class rectangle : public shape{
		public:
		int area2;
		
			dispC()
			{
				area2 =width*height;
				cout<<"AREA OF RECTANGLE = "<<area2<<endl;	
			}	
};

int main()
{
	triangle t1;
	rectangle r1;
	
	t1.dispA();
	t1.dispB();
	
	r1.dispA();
	r1.dispC();
	
	
}
