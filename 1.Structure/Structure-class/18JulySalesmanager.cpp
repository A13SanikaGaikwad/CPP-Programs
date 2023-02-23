//18 July -Pointer to one structure Variable -salesmanager
#include<iostream>
#include<string.h>
using namespace std;

class salesmanager
{
	public:
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
	void display()
	{
		printf("\n Salesmanager id is: %d",id);
		printf("\n Name is: %s",name);
		printf("\n Salary is: %lf",salary);
		printf("\n Incentive is: %lf",incentive);
		printf("\n Target is: %d",target);
	}
};
int main()
{
	salesmanager s1;
	s1.id=10;
	strcpy(s1.name,"sonali");
	s1.salary=500000;
	s1.incentive=100000;
	s1.target=1000000;
	s1.display();
}
