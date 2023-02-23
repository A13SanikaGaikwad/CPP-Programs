#include<iostream>
#include<string.h>
using namespace std;

class HR
{
	int id;
	char name[10];
	double salary;
	double commision;
	
    public:
    HR()
    {
    	this->id=0;
    	strcpy(this->name,"not given");
    	this->salary=0;
    	this->commision=0;
	}
	HR(int i,char* nm,double s,double c)
	{
		this->id=i;
    	strcpy(this->name,nm);
    	this->salary=s;
    	this->commision=c;
	}
    //setters
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
	void setcommision(double commision)
	{
		this->commision=commision;
	}
	//getters
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
	void display()
	{
		cout<<"HR \nid: "<<this->id;
		cout<<"\nName: "<<this->name;
		cout<<"\nSalary: "<<this->salary;
		cout<<"\nCommision: "<<this->commision;
	}
};
int main()
{
	HR h(11,"soni",50000,20000);
	h.display();
}
