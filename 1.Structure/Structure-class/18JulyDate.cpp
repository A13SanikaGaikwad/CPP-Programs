//18 July -Pointer to one structure Variable -Date
#include<iostream>
#include<string.h>
using namespace std;

class Date
{
	public:
	int day,month,year;
	
	void display()
	{
		printf("\n Date: %d/%d/%d",day,month,year);
	}
};
int main()
{
	Date d;
	d.day=1;
	d.month=1;
	d.year=2022;
	d.display();
}
