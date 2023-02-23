#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	int hour,minute,second;
	
    public:
    Time()
    {
    	this->hour=0;
    	this->minute=0;
    	this->second=0;
	}
	Time(int h,int m,int s)
	{
		this->hour=h;
    	this->minute=m;
    	this->second=s;
	}
	void sethour(int hour)
	{
		this->hour=hour;
	}
    void setminute(int minute)
	{
		this->minute=minute;
	}
	void setsecond(int second)
	{
		this->second=second;
	}
	int gethour()
	{
		return this->hour;
	}
	int getminute()
	{
		return this->minute;
	}
	int getsecond()
	{
		return this->second;
	}
	void display()
	{
		cout<<"Time: "<<this->hour<<"hr: "<<this->minute<<"min: "<<this->second<<"sec";
	}
};
int main()
{
	int h,m,s;
	cout<<"Enter Hour,Minute and Second\n";
	cin>>h>>m>>s;
	int hr,min,sec;
    hr=h+(m+s/60)/60;
    min=(m+s/60)%60;
    sec=s%60;
    Time T(hr,min,sec);
    T.display();
}
