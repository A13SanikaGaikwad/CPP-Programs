#include<stdio.h>
#include<string.h>

struct distance
{
	int feet,inches;
	
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
	distance d1;
	d1.setfeet(10);
	d1.setinches(2);
	printf("Distance: %d feet %d inches",d1.getfeet(),d1.getinches());
}
