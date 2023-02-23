#include<stdio.h>
#include<string.h>

struct HR
{
	int id;
	char name[20];
	double salary;
	double commision;
	
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
	void setcommision(double c)
	{
		this->commision=c;
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
	double getcommision()
    {
    	return this->commision;
	}
}; 
int main()
{
	HR h1;
	h1.setid(10);
	h1.setname("sachin");
	h1.setsalary(50000);
	h1.setcommision(1000);
	printf("id: %d ",h1.getid());
	printf("Name: %s ",h1.getname());
	printf("Salary: %lf ",h1.getsalary());
	printf("commision: %lf ",h1.getcommision());
}
