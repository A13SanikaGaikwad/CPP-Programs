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
	complex Mul(complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real*c2.real;
		temp.imag=c1.imag*c2.imag;
		return temp;
	}
    complex Mul(int a) 
	{
		complex temp;
		temp.real=this->real*a;
		temp.imag=this->imag*a;
		return temp;
	} 
	void display()
	{
		cout<<this->real<<"+"<<this->imag<<"i";
	}
};
complex Mul(int,complex);
int main()
{
	complex c1(10,20);
	complex c2(20,30);
	complex c3=c3.Mul(c1,c2);
	cout<<"\n\n Multiplication of Two complex dataype in structure function\n\n";
	c3.display();
	c3=c1.Mul(10);
	cout<<"\n\n Multiplication of One complex dataype and one int datatype in structure function\n\n";
	c3.display();
	cout<<"\n\n Multiplication of One complex dataype and one int dataype in global function\n\n";
	c3=Mul(10,c1);
	c3.display();
}
complex Mul(int a,complex c1)
{
	complex temp;
	temp.real=a*c1.real;
	temp.imag=a*c1.imag;
	return temp;
}
