//18 July -Pointer to one structure Variable -Admin
#include<iostream>
#include<string.h>
using namespace std;

class admin
{
    public:
	int id;
	char name[20];
	double salary;
	double allowance;
	
	void display()
	{
		printf("\n Admin id is: %d",id);
		printf("\n Name is: %s",name);
		printf("\n Salary is: %lf",salary);
		printf("\n Allowance is: %lf",allowance);
	}
};
int main()
{
	admin a1;
	a1.id=10;
	strcpy(a1.name,"soni");
	a1.salary=50000;
	a1.allowance=10000;
	a1.display();
}


