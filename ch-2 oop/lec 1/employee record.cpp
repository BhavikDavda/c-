#include<iostream>
using namespace std;
class Employees{
	public:
		int	id;
		char name[20];
		char role[20];
		int	age;
		int	salary;
		char experience[20];
		char city[20];
		char company_name[20];
};
int main()
{
	Employees emp[5];
	int i;
	
	cout<<"Enter employees details:"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"id:-";
		cin>>emp[i].id;
		
		cout<<"name:-";
		cin>>emp[i].name;
		
		cout<<"Role:-";
		cin>>emp[i].role;
		
		cout<<"Age:-";
		cin>>emp[i].age;
		
		cout<<"Salary:-";
		cin>>emp[i].salary;
		
		cout<<"experience:-";
		cin>>emp[i].experience;
		
		cout<<"city:-";
		cin>>emp[i].city;
		
		cout<<"company_name:-";
		cin>>emp[i].company_name;
		
		cout<<" "<<endl;
	}
	
	cout<<"The employees record is:"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"id:-"<<emp[i].id<<endl;
		cout<<"name:-"<<emp[i].name<<endl;
		cout<<"Role:-"<<emp[i].role<<endl;
		cout<<"Age:-"<<emp[i].age<<endl;
		cout<<"Salary:-"<<emp[i].salary<<endl;
		cout<<"experience:-"<<emp[i].experience<<endl;
		cout<<"city:-"<<emp[i].city<<endl;
		cout<<"company_name:-"<<emp[i].company_name<<endl;
		
		cout<<" "<<endl;
	}
	
	
	return 0;
}
