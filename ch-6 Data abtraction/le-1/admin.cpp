#include<iostream>
using namespace std;

class admin{
	protected:
		string company_name;
		int manager_salary;
		int employ_salary;
		int staff;
		int revenue;
		string terminate;
};
		
class manager :public admin{
		
		public:
			
			myacess(){
				cout<<"company name:-";
				cin>>company_name;
				
				cout<<"manger_salary:-";
				cin>>manager_salary;
				
				cout<<"employ_salary:-";
				cin>>employ_salary;
				
				cout<<"staff:-";
				cin>>staff;
				
				cout<<"terminate:-";
				cin>>terminate;
				
			
			}
		getdata1(){
			cout<<"company name:-"<<company_name<<endl;
			cout<<"manager_salary:-"<<manager_salary<<endl;
			cout<<"employ_salary:-"<<employ_salary<<endl;
			cout<<"staff:-"<<staff<<endl;
			cout<<"terminate:-"<<terminate<<endl;
			
		
		}
};

class employ :public manager{
	public:
		myacess(){
				cout<<"company name:-";
				cin>>company_name;
			
			
				
				cout<<"employ_salary:-";
				cin>>employ_salary;
				
				cout<<"staff:-";
				cin>>staff;
		}
		getdata2(){
			cout<<"company name:-"<<company_name<<endl;
			cout<<"employ_salary:-"<<employ_salary<<endl;
			cout<<"staff:-"<<staff<<endl;
		
		}
			
	
};
int main()
{
	manager m;
	employ e;
	
	cout<<"manager ditail...."<<endl;
	m.myacess();
	cout<<" "<<endl;
	m.getdata1();
	
	cout<<"employ ditail...."<<endl;
	e.myacess();
	cout<<" "<<endl;
	e.getdata2();
	

	return 0;
}
