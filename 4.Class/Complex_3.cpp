#include<iostream>
#include<string.h>
using namespace std;

class complex
{
	int real,imag;
	
    public:
    complex()
    {
    	this->real=0;
    	this->imag=0;;
	}
	complex(int r,int i)
	{
		this->real=r;
		this->imag=i;
	}
	void setreal(int real)
	{
		this->real=real;
	}
    void setimag(int imag)
	{
		this->imag=imag;
	}
	int getreal()
	{
		return this->real;
	}
	int getimag()
	{
		return this->imag;
	}
	void display()
	{
		cout<<"Complex : "<<this->real<<"+"<<this->imag<<"i";
	}
};
int main()
{
	complex c1(50,100);
	c1.display();
}
