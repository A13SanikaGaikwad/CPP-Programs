//18 July -Pointer to one structure Variable -Time
#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	public:
	int hr,min,sec;
	
	void display()
	{
		printf("\n Time: %dhr:%dmin:%dsec",hr,min,sec);
	}
};
int main()
{
	Time t;
	t.hr=1;
	t.min=20;
	t.sec=20;
	t.display();
}
