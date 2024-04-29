#include<iostream>
using namespace std;

class num{
	public:
		int number;
		
		dispA()
		{
			
			cout<<"Enter the number = ";
			cin>>number;
			
			
		}
};

class square : public num{
		public:
		int square;
	
		
			dispB()
			{
				square = number*number;
				cout<<"SQUARE OF A NUMBER  = "<<square<<endl;	
			}	
};

class cube : public num{
		public:
		int cube;
		
			dispC()
			{
				cube =number*number*number;
				cout<<"CUBE OF A NUMBER = "<<cube<<endl;	
			}	
};

int main()
{
	square s1;
	cube c1;
	
	s1.dispA();
	s1.dispB();
	
	c1.dispA();
	c1.dispC();
	
	
}
