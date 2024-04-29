#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	
	cout<<"Enter a number:-";
	cin>>a;
	
	cout<<"Enter a number:-";
	cin>>b;
	
	try{
		if(b==0)
		{
			throw b;
		}
		int sum=0;
		sum= a/b;
		
		cout<<"Division:-"<<sum<<endl;
	}
	catch(int n)
	{
		cout<<"The number cannot be divided by zero";
	}
	catch(...)
	{
		cout<<"Character is not divisible....";
	}
	return 0;
}

