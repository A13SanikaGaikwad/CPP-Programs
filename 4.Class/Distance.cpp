#include<stdio.h>

struct distance
{
	int feet,inches;
	
	void display()
    {
	    printf("Distance: %d Feet and %d Inches ",this->feet,this->inches);
    }
	void setfeet(int a)
	{
		this->feet=a;
	}
	void setinches(int i)
	{
		this->inches=i;
	}
	int getfeet()
	{
		return this->feet;
	}
	int getinches()
	{
		return this->inches;
	}
	distance()
	{
		this->feet=0;
		this->inches=0;
	}
	distance(int a,int b)
	{
		this->feet=a;
		this->inches=b;
	}	
};
int main()
{
	distance d1;
	d1.display();
	distance d2(10,20);
	d2.display();
}


