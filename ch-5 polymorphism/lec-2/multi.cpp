#include<iostream>
using namespace std;

class multipl{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		multipl operator*(multipl n)
		{
			multipl multi ;
			
			multi.i=this->i*n.i;
			
			return multi;
		}
		
		void getmulti()
		{
			cout<<"multipal of both number:- "<<this->i;
		}
};

int main()
{
	multipl a1,a2,a3;
	
	a1.setdata(10);
	a2.setdata(20);
	
	a3=a1*a2;
	
	a3.getmulti();
	
	return 0;
}
