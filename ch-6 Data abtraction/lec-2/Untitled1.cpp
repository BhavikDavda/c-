#include<iostream>
using namespace std;
class bhavik{
	public:
		void dispbhavik(){
			cout<<"hellp bhavik..."<<endl;
			
		}
};
class shital : public bhavik {
	public:
	virtual	 void dispbhavik(){
			cout<<"hello shital..."<<endl;
		}
};
int main()
{
	bhavik *b1;
	shital s;
	
	b1=&s;
	b1->dispbhavik();
	return 0;
	
}
