#include<stdio.h>
#include<string.h>

struct admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
	
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
	admin a1;
	a1.setid(10);
	a1.setname("sachin");
	a1.setsalary(50000);
	a1.setallowance(1000);
	printf("id: %d ",a1.getid());
	printf("Name: %s ",a1.getname());
	printf("Salary: %lf ",a1.getsalary());
	printf("allowance: %lf ",a1.getallowance());
}
