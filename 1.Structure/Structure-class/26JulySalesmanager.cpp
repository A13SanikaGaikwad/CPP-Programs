#include<iostream>
#include<string.h>
using namespace std;

class salesmanager
{
	public:
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	void display()
    {
	    cout<<"\nSalesmanager\n id:"<<this->id<<" name:"<<this->name<<" salary:"<<this->salary<<" incentive:"<<this->incentive<<" target:"<<this->target;
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
	void setincentive(double c)
	{
		this->incentive=c;
	}
	void settarget(int d)
	{
		this->target=d;
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
	double getincentive()
	{
		return this->incentive;
	}
	int gettarget()
	{
		return this->target;
	}
		
};
int main()
{
	salesmanager s1,s2;
	int x;
	cout<<"Enter id: ";
	cin>>x;
	s1.setid(x);
	s2.setid(10);
	s1.setname("soni");
	s2.setname("moni");
	s1.setsalary(50000);
	s2.setsalary(20000);
	s1.setincentive(10000);
	s2.setincentive(20000);
	s1.settarget(1000);
	s2.settarget(2000);
	s1.display();
	s2.display();
}
