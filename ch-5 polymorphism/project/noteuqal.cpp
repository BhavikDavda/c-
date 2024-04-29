#include<iostream>
using namespace std;

class noteuqal{
	private:
		int i;
	public:
		void setdata(int i)
		{
			this->i=i;
		}
		
		operator!=(noteuqal n)
		{
			noteuqal sa;
			sa.i=this->i!=n.i;
		}
		
};

int main()
{
	noteuqal b1,b2;
	
	int a;
	int b;
	
	cout<<"enter a:- ";
	cin>>a;
	
	cout<<"enter b:- ";
	cin>>b;
	
	b1.setdata(a);
	b2.setdata(b);
	
	if(b1!=b2)
	{
		cout<<"a and b are not euqal.."<<endl;
	}
	else
	{
		cout<<"a and b are euqal..."<<endl;	
	}
	
	return 0;
}
