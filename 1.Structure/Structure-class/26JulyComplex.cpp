#include<iostream>
#include<string.h>
using namespace std;

class complex
{
	int real;
	int imag;
	public:
	void display()
    {
	    cout<<"Complex Number:"<<this->real<<"+"<<this->imag<<"i ";
    }
	void setreal(int a)
	{
		this->real=a;
	}
	void setimag(int i)
	{
		this->imag=i;
	}
	int getreal()
	{
		return this->real;
	}
	int getimag()
	{
		return this->imag;
	}	
};
int main()
{
	complex c1,c2;
	int x,y;
	cout<<"Enter real Number: ";
	cin>>x;
	cout<<"Enter imaginary Number: ";
	cin>>y;
	c1.setreal(x);
	c2.setreal(10);
	c1.setimag(y);
	c2.setimag(20);
	c1.display();
	c2.display();
}
