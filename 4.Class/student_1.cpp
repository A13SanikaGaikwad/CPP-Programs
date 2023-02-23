#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll;
	char name[10];
	
    public:
    student()
    {
    	this->roll=0;
    	strcpy(this->name,"not given");
	}
	student(int r,char* nm)
	{
		this->roll=r;
		strcpy(this->name,nm);
	}
	void setroll(int roll)
	{
		this->roll=roll;
	}
	void setname(char* name)
	{
		strcpy(this->name,name);
	}
	int getroll()
	{
		return this->roll;
	}
	char* getname()
	{
		return this->name;                                         
	}
	void display()
	{
		cout<<"\nRoll: "<<this->roll;
		cout<<"\nName: "<<this->name;
	}
};
int main()
{
	student s1(11,"sanika");
	s1.display();
}
