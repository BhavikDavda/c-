#include<iostream>
using namespace std;
int main()
{
	char a[10];
	
	cout<<"Enter any string:";
	cin>>a;
	
	int i;
	for(i=0;i<10;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	cout<<" "<<a;
	
	
	
	return 0;
}
