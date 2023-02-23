#include<iostream>
#include<string.h>
using namespace std;

class Date
{
	int day,month,year;
	
    public:
    Date()
    {
    	this->day=0;
    	this->month=0;
    	this->year=0;
	}
	Date(int d,int m,int y)
	{
		this->day=d;
		this->month=m;
		this->year=y;
	}
	void setday(int day)
	{
		this->day=day;
	}
    void setmonth(int month)
	{
		this->month=month;
	}
	void setyear(int year)
	{
		this->year=year;
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
	void display()
	{
		cout<<"\nDate: "<<this->day<<"/"<<this->month<<"/"<<this->year;
	}
};
int main()
{
	int d,m,y;
	cout<<"Enter the date,month and year:\n";
	cin>>d>>m>>y;
	Date D(d,m,y);
	if(d>31)
	{
		cout<<"\n"<<d<<" Day is not Valid :Because Day is from 1 to 31";
	}
	else if(m>12)
	{
		cout<<"\n"<<m<<" Month is not Valid :Because Month is from 1 to 12";
	}
	else
	{
		D.display();
	}
}
