#include<iostream>
#include<string.h>
using namespace std;

class time
{
	public:
	int hr,min,sec;
	void display()
    {
	    cout<<"\nTime- "<<this->hr<<"hr: "<<this->min<<"min: "<<this->sec<<"sec";
    }
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
    time t1,t2;
	int x,y,z;
	cout<<"Enter Hr: ";
	cin>>x;
	cout<<"Enter Min: ";
	cin>>y;
	cout<<"Enter Sec: ";
	cin>>z;
	t1.sethr(x);
	t2.sethr(1);
	t1.setmin(y);
	t2.setmin(1);
	t1.setsec(z);
	t2.setsec(1);
	t1.display();
	t2.display();
}
