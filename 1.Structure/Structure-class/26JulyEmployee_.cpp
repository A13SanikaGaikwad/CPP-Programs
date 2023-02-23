#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	public:
	int id;
	char name[20];
	double salary;
	void display()
    {
	    cout<<"\nEmployee\n id:"<<this->id<<" name:"<<this->name<<" salary:"<<this->salary;
    }
	void setid(int a)
	{
		this->id=a;
	}
	void setname(char* name)
	{
		strcpy(this->name,name);
	}
	void setsalary(double b)
	{
		this->salary=b;
	}
	int getid()
	{
		return this->id;
	}
	char* getname()
	{
		return this->name;
	}
	double getsalary()
	{
		return this->salary;
	}	
};
int main()
{
	employee e1,e2;
	int x;
	cout<<"Enter id: ";
	cin>>x;
	e1.setid(x);
	e2.setid(10);
	e1.setname("soni");
	e2.setname("moni");
	e1.setsalary(50000);
	e2.setsalary(20000);
	e1.display();
	e2.display();
}
