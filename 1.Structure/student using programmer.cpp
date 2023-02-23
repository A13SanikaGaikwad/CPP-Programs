#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
	void display()
	{
		printf("\n rollno: %d",roll);
		printf("\n name: %s",name);
	}
	
	void setroll(int a)
	{
		roll=a;
	}	
};
int main()
{
	student s1;
	s1.setroll(10);
	strcpy(s1.name,"soni");
	s1.display();
	student s2;
	s2.setroll(18);
	strcpy(s2.name,"moni");
	s2.display();
}
