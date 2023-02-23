#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
	
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
	student s1;
	s1.setroll(10);
	s1.setname("sachin");
	printf("roll: %d ",s1.getroll());
	printf("Name: %s ",s1.getname());

}
