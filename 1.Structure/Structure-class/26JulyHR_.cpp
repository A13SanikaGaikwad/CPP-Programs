#include<iostream>
#include<string.h>
using namespace std;
class hr
{
	public:
	int id;
	char name[20];
	double salary;
	double commision;
	void display()
    {
	    cout<<"\nHR\n id:"<<this->id<<" name:"<<this->name<<" salary:"<<this->salary<<" commision:"<<this->commision;
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
	hr h1,h2;
	int x;
	cout<<"Enter id: ";
	cin>>x;
	h1.setid(x);
	h2.setid(10);
	h1.setname("soni");
	h2.setname("moni");
	h1.setsalary(50000);
	h2.setsalary(20000);
	h1.setcommision(10000);
	h2.setcommision(20000);
	h1.display();
	h2.display();
}
