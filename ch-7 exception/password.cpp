#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char password[50];	
	cout<<"Enter your password:";
	cin>>password;
	
	int i;
	try{
		for(i=0;i<strlen(password);i++)
	{
		if(password[i]>=65 && password[i]<=90)
		{
			throw password;
		}
}
		cout<<"your password is valid and successfully logged in..";
		
	}catch(...){
		cout<<"sorry your password invalid and try again..."<<endl;
	}
	return 0;
}
