#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array size";
	cin>>n;
	int i,a[n];
	for(i=2020;i<=3030;i++)
	{
		if(i%4==0)
		{
			cout<<""<<a[i]<<endl;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"Leap year is "<<a[i]<<endl;
	}
	return 0;
}
