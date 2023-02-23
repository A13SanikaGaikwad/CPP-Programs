#include<iostream>
#include<string.h>
using namespace std;

class date
{
	public:
	int day,month,year;
	void display()
    {
	    cout<<"\nDate: "<<this->day<<"/"<<this->month<<"/"<<this->year;
    }
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
	date d1,d2;
	int x,y,z;
    cout<<"Enter Day: ";
	cin>>x;
	cout<<"Enter Month: ";
	cin>>y;
	cout<<"Enter Year: ";
	cin>>z;
	d1.setday(x);
	d2.setday(13);
	d1.setmonth(y);
	d2.setmonth(9);
	d1.setyear(z);
	d2.setyear(2000);
	d1.display();
	d2.display();
}
