//18 July -Pointer to one structure Variable -Employee
#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	public:
	int id;
	char name[20];
	double salary;
	
	void display()
	{
		printf("\n Employee id is: %d",id);
		printf("\n Name is: %s",name);
		printf("\n Salary is: %lf",salary);
	}
};
int main()
{
	employee e1;
	e1.id=10;
	strcpy(e1.name,"soni");
	e1.salary=50000;
	e1.display();
}
