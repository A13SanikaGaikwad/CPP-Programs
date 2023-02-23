#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	int feet,inches;
	
    public:
    Distance()
    {
    	this->feet=0;
    	this->inches=0;
	}
	Distance(int f,int i)
	{
		this->feet=f;
		this->inches=i;
	}
	void setfeet(int feet)
	{
		this->feet=feet;
	}
    void setinches(int inches)
	{
		this->inches=inches;
	}
	int getfeet()
	{
		return this->feet;
	}
	int getinches()
	{
		return this->inches;
	}
	void display()
	{
		cout<<"\n"<<this->feet<<" Feet "<<this->inches<<" Inches";
	}
};
int main()
{
	int f,i,feet,inches;
	cout<<"\nEnter Feet: ";
	cin>>f;
	cout<<"\nEnter Inches: ";
	cin>>i;
    feet=f+i/12;
	inches=i%12;
	Distance D(feet,inches);
	D.display();
}
