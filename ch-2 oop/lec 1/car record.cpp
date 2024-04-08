#include<iostream>
using namespace std;
class Cars{
	public:
		int id;
		char company_name[20];
		char color[20];
		char model[20];
		int release_year;
};
int main()
{
		Cars car[4];
		int i;
		
		cout<<"Enter a car detail:"<<endl;
	
		for(i=0;i<4;i++)
		{
			cout<<"Car_id:-";
			cin>>car[i].id;
			
			cout<<"Company_name:-";
			cin>>car[i].company_name;
			
			cout<<"car_color:-";
			cin>>car[i].color;
			
			cout<<"model:-";
			cin>>car[i].model;
			
			cout<<"release_year:-";
			cin>>car[i].release_year;
				
			cout<<"  "<<endl;
			
		}
		
		cout<<"Cars detail is:"<<endl;
		
		for(i=0;i<4;i++)
		{
			cout<<"Car_id:-"<<car[i].id<<endl;
			cout<<"Company_name:-"<<car[i].company_name<<endl;
			cout<<"Car_color:-"<<car[i].color<<endl;
			cout<<"Model:-"<<car[i].color<<endl;
			cout<<"release_year:-"<<car[i].release_year<<endl;
			
			cout<<" "<<endl;
			
		}
	
		return 0;
			
	
}
