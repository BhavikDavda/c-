#include<iostream>
using namespace std;

class Customers{
	private:
	int	id;
	string	name;
	int	age;
	string	telecome_brand_name;
	int	mobile_number;
	string	city;
	int	simcard_validity;
	
	public:
		void setdata(int id, string nmae, int age, string telecome_brand_name, int mobile_number, string city, int simcard_validity ){
			this->id=id;
			this->name=name;
			this->age=age;
			this->telecome_brand_name=telecome_brand_name;
			this->mobile_number=mobile_number;
			this->city=city;
			this->simcard_validity=simcard_validity;
			
			cout<<" "<<endl;
			
		}
		void getdata(){
			cout<<"customer id:-"<<this->id<<endl;
			cout<<"customer name:-"<<this->name<<endl;
			cout<<"customer age:-"<<this->age<<endl;
			cout<<"customer telecome_brand_name:-"<<this->telecome_brand_name<<endl;
			cout<<"customer mobile number:-"<<this->mobile_number<<endl;
			cout<<"customer city:-"<<this->city<<endl;
			cout<<"customer simcard validity:-"<<this->simcard_validity<<endl;
			
			cout<<" "<<endl;
		}
};

int main()
{
	Customers c1,c2,c3,c4,c5;
	
	c1.setdata(1,"Bhavik",21,"jio",9537745345,"rajkot",5);
	c2.setdata(2,"vishal",21,"jio",8758144834,"rajkot",5);
	c3.setdata(3,"yash",18,"airtel",9537745455,"rajkot",5);
	c4.setdata(4,"Bhavy",22,"vi",9997745345,"rajkot",5);
	c5.setdata(5,"mohit",19,"jio",9537799045,"rajkot",5);
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	
	
	return 0;
}
