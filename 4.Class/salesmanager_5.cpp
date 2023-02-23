#include<iostream>
#include<string.h>
using namespace std;

class salesmanager
{
	int id;
	char name[10];
	double salary;
	double incentive;
	int target;
	
	
    public:
    salesmanager()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	this->incentive=0;
    	this->target=0;
	}
	salesmanager(int i,char* nm,double s,double in,int t)
	{
		this->id=i;
    	strcpy(this->name,nm);
    	this->salary=s;
    	this->incentive=in;
    	this->target=t;
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
	void setincentive(double incentive)
	{
		this->incentive=incentive;
	}
	void settarget(int target)
	{
		this->target=target;
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
	void display()
	{
		cout<<"\nid: "<<this->id;
		cout<<"\nName: "<<this->name;
		cout<<"\nSalary: "<<this->salary;
		cout<<"\nIncentive: "<<this->incentive;
		cout<<"\nTarget: "<<this->target;
	}
};
int main()
{
	salesmanager s1(11,"soni",50000,51000,51);
	s1.display();
}
