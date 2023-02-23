//18 July -Pointer to one structure Variable -HR
#include<iostream>
#include<string.h>
using namespace std;

class HR
{
	public:
	int id;
	char name[20];
	double salary;
	double commision;
	
	void display()
	{
		printf("\n HR id is: %d",id);
		printf("\n Name is: %s",name);
		printf("\n Salary is: %lf",salary);
		printf("\n Commision is: %lf",commision);
	}
};
int main()
{
	HR h1;
	h1.id=10;
	strcpy(h1.name,"Sonali");
	h1.salary=50000;
	h1.commision=10000;
	h1.display();
}
