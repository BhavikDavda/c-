#include<iostream>
using namespace std;

class student{
	private:
		int id;
		string name;
		int age;
		string course;
		string email;
		string city;
		string college;
		
	public:
		void setdata(){
			cout<<"stdent id:";
			cin>>id;
			
			cout<<"stdent name:";
			cin>>name;
			
			cout<<"stdent age:";
			cin>>age;
			
			cout<<"stdent couse:";
			cin>>course;
			
			cout<<"stdent email";
			cin>>email;
			
			cout<<"stdent city:";
			cin>>city;
			
			cout<<"stdent college:";
			cin>>college;
			
			
		}
		void getdata(){
			cout<<"student id:"<<id<<endl;
			cout<<"student name:"<<name<<endl;
			cout<<"student age:"<<age<<endl;
			cout<<"student course:"<<course<<endl;
			cout<<"student city:"<<city<<endl;
			cout<<"student college:"<<college<<endl;
		}
};

int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
		
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	
	return 0;
	
}
	
