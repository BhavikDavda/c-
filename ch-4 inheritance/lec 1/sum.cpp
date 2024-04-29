#include<iostream>
using namespace std;

class bhavik{
	public:
		int a;
		int b;
		int c;
		int sum;
		
	void setdata(){
			cout<<"Enter the value of A = ";
			cin>>a;
			cout<<"Enter the value of B = ";
			cin>>b;
			cout<<"Enter the value of C = ";
			cin>>c;
	}
	
};

class sum : public bhavik{
		public:
		 getdata(){
		 	int sum=0;
		 	sum=(a*a*a) + (b*b*b) + (c*c*c);
			cout<<"sum = "<<sum<<endl;
		}
};

int main()
{
	sum s;
	
	s.setdata();
	s.getdata();
	
	return 0;
	
	
}
