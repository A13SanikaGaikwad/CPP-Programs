#include<stdio.h>
#include<string.h>

struct Salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
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
	Salesmanager s1;
	s1.setid(10);
	s1.setname("sachin");
	s1.setsalary(50000);
	s1.setincentive(1000);
	s1.settarget(100000);
	printf("id: %d ",s1.getid());
	printf("Name: %s ",s1.getname());
	printf("Salary: %lf ",s1.getsalary());
	printf("Incentive: %lf ",s1.getincentive());
	printf("target: %d ",s1.gettarget());
}
