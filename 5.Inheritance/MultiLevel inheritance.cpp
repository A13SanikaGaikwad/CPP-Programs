//Multilevel inheritance
#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	int id;
	char name[10];
	double salary;
    
	public:
	//default constructor of Emp
    Employee()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
	}
	//parameterised constructor of Emp
	Employee(int i,char*nm,double s)
	{
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
	}
	void set_id(int i)
	{
		this->id=i;
	}
	void set_name(char* nm)
	{
		strcpy(this->name,nm);
	}
	void set_salary(double s)
	{
		this->salary=s;
	}
	int get_id()
	{
		return this->id;
	}
	char* get_name()
	{
		return this->name;                                         
	}
	double get_salary()
	{
		return this->salary;
	}
    void display()
	{
		cout<<"\nid is: "<<this->id;
		cout<<"\nName is: "<<this->name;
		cout<<"\nsalary is: "<<this->salary;
	}
};
class Salesmanager : public Employee
{
	double incentive;
    double target;
	public:
	//default constructor of SM
	Salesmanager() : Employee() 
	{
    	this->incentive=11;
    	this->target=22;
	}
	//parameterized constructor of SM
	Salesmanager(int i,char*nm,double s,double in,double t) : Employee(i,nm,s)
	{
		this->incentive=in;
		this->target=t;
	}
	void set_incentive(double in)
	{
		this->incentive=in;
	}
	void set_target(double t)
	{
		this->target=t;
	}
	double get_incentive()
	{
		return this->incentive;
	}
	double get_target()
	{
		return this->target;
	}
	void display()
	{
		cout<<"\nSalesmanager:";
		Employee :: display();
		cout<<"\nIncentive is: "<<this->incentive;
		cout<<"\nTarget is: "<<this->target;
	}
};
class AreaSalesmanager : public Salesmanager
{
	char AreaName[10];
	public:
	//default constructor of Admin
	AreaSalesmanager() : Salesmanager()
	{
    	strcpy(this->AreaName,"not given");
	}
	//Parameterized constructor of Admin
	AreaSalesmanager(int i,char*nm,double s,double in,double t,char* a) : Salesmanager(i,nm,s,in,t)
	{
		strcpy(this->AreaName,a);
	}
	void set_AreaName(char* a)
	{
		strcpy(this->AreaName,a);
	}
	char* get_AreaName()
	{
		return this->AreaName;
	}
	void display()
	{
		cout<<"\nAreaSalesManager:";
		Salesmanager :: display();
		cout<<"\nAreaName is: "<<this->AreaName;
	}
};
int main()
{
	Employee e1(101,"soni",50000);
	e1.display();
	cout<<"\n\n";
	
	Salesmanager s1(102,"sanika",51000,300,33);
	s1.display();
	cout<<"\n\n";
	
	AreaSalesmanager a1(103,"sonali",55000,301,34,"pune");
	a1.display();
	cout<<"\n\n";
}
