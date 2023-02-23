#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:
	int roll;
	char name[20];
	void display()
    {
	    cout<<"\nRoll no is:"<<this->roll<<" and name is "<<this->name;
    }
	void setroll(int a)
	{
		this->roll=a;
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
};
int main()
{
	student s1,s2;
	int x;
	cout<<"Enter roll no: ";
	cin>>x;
	s1.setroll(x);
	s2.setroll(10);
	s1.setname("soni");
	s2.setname("moni");
	s1.display();
	s2.display();
}
