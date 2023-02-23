#include<stdio.h>
#include<string.h>

struct date
{
	int day,month,year;
	
	void setday(int a)
	{
	    this->day=a;
	}
	void setmonth(int b)
	{
		this->month=b;
	}
	void setyear(int c)
	{
		this->year=c;
	}
	int getday()
	{
		return this->day;
	}
    int getmonth()
	{
		return this->month;
	}
	int getyear()
	{
		return this->year;
	}
}; 
int main()
{
	date d1;
	d1.setday(13);
	d1.setmonth(9);
	d1.setyear(2000);
	printf("Date: %d/%d/%d",d1.getday(),d1.getmonth(),d1.getyear());
}
