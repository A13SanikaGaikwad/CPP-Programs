//18 July -Pointer to one structure Variable -Student
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
		printf("\n Rollno. is: %d",roll);
		printf("\n Name is: %s",name);
	}
};
int main()
{
	student s1;
	s1.roll=10;
	strcpy(s1.name,"soni");
	s1.display();
}
