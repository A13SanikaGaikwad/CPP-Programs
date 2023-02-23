#include<iostream>
#include<string.h>
using namespace std;

class complex
{
	int real;
	int imag;
	public:
	//default constructor
	complex()
	{
		this->real=0;
		this->imag=0;
	}
	//parameterized constructor
	complex(int a,int b)
	{
		this->real=a;
		this->imag=b;
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
	void display()
	{
		cout<<"\ncomplex Number is: "<<this->real<<"+"<<this->imag<<"i";
	}
	friend complex operator-(int,complex);
};
int main()
{
	complex c1(50,100);
	c1.display();
	complex c2;
	c2=operator-(100,c1);
	c2.display(); 
}
complex operator-(int a,complex c2)
{
	complex temp;
	temp.real=a-c2.real;
	temp.imag=a-c2.imag;
	return temp;
}
