#include<iostream>
using namespace std;
class complex
{
	public:
	int real,imag;
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
	complex add(complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}
	void display()
	{
		cout<<this->real<<"+"<<this->imag<<"i";
	}
};
int main()
{
	complex c1(10,20);
	complex c2(20,30);
	complex c3=c3.add(c1,c2);
	cout<<"\n\n Addition of Two complex dataype in structure function\n\n";
	c3.display();
}
