//Tree/Hierarchial inheritance
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
    virtual	void display()
	{
		cout<<"\nid is: "<<this->id;
		cout<<"\nName is: "<<this->name;
		cout<<"\nsalary is: "<<this->salary;
	}
	virtual double calsal()
	{
		return this->get_salary();
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
	double calsal()
	{
		return this->get_salary() + incentive;
	}
	void display()
	{
		cout<<"\nSalesmanager:";
		Employee :: display();
		cout<<"\nIncentive is: "<<this->incentive;
		cout<<"\nTarget is: "<<this->target;
	}
};
class Admin : public Employee
{
	double allowance;
	public:
	//default constructor of Admin
	Admin() : Employee()
	{
    	this->allowance=0;
	}
	//Parameterized constructor of Admin
	Admin(int i,char*nm,double s,double a) : Employee(i,nm,s)
	{
		this->allowance=a;
	}
	void set_allowance(double a)
	{
		this->allowance=a;
	}
	double get_allowance()
	{
		return this->allowance;
	}
	double calsal()
	{
		return this->get_salary() + allowance;
	}
	void display()
	{
		cout<<"\nAdmin:";
		Employee :: display();
		cout<<"\nAllowance is: "<<this->allowance;
	}
};
int main()
{
	Employee *ep;
	Employee e1(101,"soni",50000);
	ep=&e1;
	ep->display();
	cout<<"\n Total Salary is "<<ep->calsal();
	cout<<"\n\n";
	
	Salesmanager s1(102,"sanika",51000,300,33);
	ep=&s1;
	ep->display();
	cout<<"\n Total Salary is "<<ep->calsal();
	cout<<"\n\n";
	
	Admin a1(103,"sonali",55000,30);
	ep=&a1;
	ep->display();
	cout<<"\n Total Salary is "<<ep->calsal();
	cout<<"\n\n";
}
