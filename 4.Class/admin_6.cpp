#include<iostream>
#include<string.h>
using namespace std;

class Admin
{
	int id;
	char name[10];
	double salary;
	double allowance;
	
    public:
    Admin()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	this->allowance=0;
	}
	Admin(int i,char* nm,double s,double in)
	{
		this->id=i;
    	strcpy(this->name,nm);
    	this->salary=s;
    	this->allowance=in;	
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
	void setallowance(double allowance)
	{
		this->allowance=allowance;
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
	double getallowance()
	{
		return this->allowance;
	}
	void display()
	{
		cout<<"\nid: "<<this->id;
		cout<<"\nname: "<<this->name;
		cout<<"\nsalary: "<<this->salary;
		cout<<"\nAllowance: "<<this->allowance;
	}
};
int main()
{
	Admin a(11,"soni",50000,11000);
	a.display();
}
