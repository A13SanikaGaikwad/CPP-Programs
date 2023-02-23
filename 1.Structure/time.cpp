#include<stdio.h>
#include<string.h>

struct Time
{
	int hr,min,sec;
	
	void display()
	{
		printf("\n Time: %d:%d:%d",hr,min,sec);
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
