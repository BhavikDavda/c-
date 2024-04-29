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
		
		cout<<"Divition:-"<<sum<<endl;
	}
	
	catch(...)
		{
			cout<<"The number cannot be divide by zero";
		}
	
	return 0;
	
}
