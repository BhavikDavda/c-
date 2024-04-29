#include <iostream>
using namespace std;

class Animal 
{
	public:
    string name;
    int age;

    void setdata(string n, int a) 
	{
        name = n;
        age = a;
    }
};

class Zebra : public Animal 
{
	public:
    Zebra(string n, int a) 
	{
        setdata(n, a);
    }

    void disp() {
        cout << "Zebra Name: " << this->name << endl << "Age: " << this->age << endl;
        cout << "Location: Africa" << endl;
    }
};

class Dolphin : public Animal 
{
public:
    Dolphin(string n, int a) 
	{
        setdata(n, a);
    }

    void display() 
	{
        cout << "Dolphin Name: " << this->name << endl << "Age: " << this->age << endl;
        cout << "Location: Ocean" << endl;
    }
};

int main() 
{
    Zebra z1("Nehal", 5);
    z1.disp();

    Dolphin d1("Bhavy", 10);
    d1.display();

    return 0;
}

