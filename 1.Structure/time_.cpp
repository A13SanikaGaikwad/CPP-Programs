#include<stdio.h>
#include<string.h>

struct time
{
	int hr,min,sec;
	
	void sethr(int a)
	{
	    this->hr=a;
	}
	void setmin(int b)
	{
		this->min=b;
	}
	void setsec(int c)
	{
		this->sec=c;
	}
	int gethr()
	{
		return this->hr;
	}
    int getmin()
	{
		return this->min;
	}
	int getsec()
	{
		return this->sec;
	}
}; 
int main()
{
	time t1;
	t1.sethr(5);
	t1.setmin(59);
	t1.setsec(59);
	printf("Time: %d hr:%d min:%d sec",t1.gethr(),t1.getmin(),t1.getsec());
}
