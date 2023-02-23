#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	int id;
	char name[10];
	double salary;
	
    public:
    Employee()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
	}
	Employee(int i,char* nm,double s)
	{
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
	}
	void setid(int id)
	{
		this->id=id;
	}
	void setname(char* name)
	{
		strcpy(this->name,name);
	}
	void setsalary(double salary)
	{
		this->salary=salary;
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
	void display()
	{
		cout<<"\nId: "<<this->id;
		cout<<"\nName: "<<this->name;
		cout<<"\nSalary: "<<this->salary;
	}
};
int main()
{
	Employee e1(11,"soni",50000);
	e1.display();
}
