#include<iostream>
#include<string.h>
using namespace std;

class admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
	public:
	void display()
    {
		cout<<"\nid:"<<this->id;
		cout<<"\nname:"<<this->name;
		cout<<"\nsalary:"<<this->salary;
		cout<<"\nallowance:"<<this->allowance;
    }
    admin()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	this->allowance=0;
	}
	admin(int i,char* n,double s,double a)
	{
		this->id=i;
    	strcpy(this->name,n);
    	this->salary=s;
    	this->allowance=a;
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
	void setallowance(double c)
	{
		this->allowance=c;
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
};
int main()
{
	admin a1(20,"soni",50000,10000);
	admin a2(10,"moni",20000,20000);
	a1.display();
	cout<<"\n\n";
	a2.display();
}
