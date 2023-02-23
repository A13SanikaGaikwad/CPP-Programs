#include<stdio.h>
#include<string.h>

struct distance
{
	int feet,inches;
	
	void display()
	{
		printf("\n Distance: %d feet,%d inches",feet,inches);
	}
};
int main()
{
	distance d1;
	d1.feet=20;
	d1.inches=5;
	d1.display();
}
