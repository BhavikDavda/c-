#include<iostream>
using namespace std;

int main()
{
	int a;
	
	
	cout<<"Enter a number:-";
	cin>>a;
	

	try
	{
		if(a<=18)
		{
			throw a;
		}
		
		
		cout<<"You are able to vate"<<endl;
		}catch(int n)
		{
			cout<<"cannot be able to vote if his/her age is less than 10";
		}
	
	return 0;
}
