#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public:
	int feet;
	int inches;
	void display()
    {
	    cout<<"\nDistance: "<<this->feet<<" feet "<<this->inches<<" inches";
    }
	void setfeet(int a)
	{
		this->feet=a;
	}
	void setinches(int b)
	{
		this->inches=b;
	}
	int getfeet()
	{
		return this->feet;
	}
	int getinches()
	{
		return this->inches;
	}	
};
int main()
{
	Distance d1,d2;
	int x,y;
	cout<<"Enter Feet: ";
	cin>>x;
	cout<<"Enter inches: ";
	cin>>y;
	d1.setfeet(x);
	d2.setfeet(10);
	d1.setinches(y);
	d2.setinches(2);
	d1.display();
	d2.display();
}
