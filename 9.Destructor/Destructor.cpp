#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll;
	char name[10];
	static int count;
	public:
	//Destructor
	~student()
	{
		this->roll=0;
		strcpy(this->name,"not given");
		count--;
	}
	void setroll(int r)
	{
		this->roll=0;
	}
	void setname(char* nm)
	{
		strcpy(this->name,nm);
	}
	void setcount(int count)
	{
		this->count=0;
	}
	int getroll()
	{
		return this->roll;
	}
	char* getname()
	{
		return this->name;
	}
	static int getcount()
	{
		return count;
	}
	void display()
	{
		cout<<"\nStudent :\nRoll is: "<<this->roll;
		cout<<"\nname is: "<<this->name;
	}
};
int student::count=0;
void myfun();
int main()
{
	student s1,s2;
	cout<<student::getcount();
	cout<<"\n";
	myfun();
	cout<<student::getcount();
}
void myfun()
{
	student s3,s4;
	
}
