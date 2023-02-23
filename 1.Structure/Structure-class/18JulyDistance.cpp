//18 July -Pointer to one structure Variable -Distance
#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public:
	int feet,inches;
	
	void display()
	{
		printf("\n Distance: %d feet,%d inches",feet,inches);
	}
};
int main()
{
	Distance d;
	d.feet=20;
	d.inches=5;
	d.display();
}
