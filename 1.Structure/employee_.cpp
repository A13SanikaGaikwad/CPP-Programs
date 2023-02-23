#include<stdio.h>
#include<string.h>

struct Employee
{
	int id;
	char name[20];
	double salary;
	
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
	Employee e1;
	e1.setid(10);
	e1.setname("sachin");
	e1.setsalary(500000);
	printf("roll: %d ",e1.getid());
	printf("Name: %s ",e1.getname());
	printf("Salary: %s ",e1.getsalary());

}
