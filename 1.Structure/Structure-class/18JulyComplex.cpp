//18 July -Pointer to one structure Variable -Complex
#include<iostream>
#include<string.h>
using namespace std;

class complex
{
	public:
	int real,img;
	
	void display()
	{
		printf("\n Complex No: %d + %di",real,img);
	}
};
int main()
{
	complex c1;
	c1.real=20;
	c1.img=30;
	c1.display();
}
