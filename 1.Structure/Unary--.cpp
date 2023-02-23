#include<iostream>
using namespace std;
struct complex
{
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
	//PostIncrement
	complex operator--()
	{
		complex temp;
		temp.real=this->real--;
		temp.imag=this->imag--;
		return temp;
	}
	//display
	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<"\n";
	}
};
int main()
{
	complex c1(10,20);
	complex c2;
    c2=c1.operator--();
    c2.display();
    c1.display();
    complex c3;
    c3=--c1;
    c1.display();
    c3.display();
}
