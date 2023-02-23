#include<iostream>
using namespace std;
class complex
{
	public:
	float real,imag;
	//default constructor
	complex()
	{
		this->real=0;
		this->imag=0;
	}
	//parameterized constructor
	complex(float a,float b)
	{
		this->real=a;
		this->imag=b;
	}
	complex Div(complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real/c2.real;
		temp.imag=c1.imag/c2.imag;
		return temp;
	}
    complex Div(float a) 
	{
		complex temp;
		temp.real=this->real/a;
		temp.imag=this->imag/a;
		return temp;
	} 
	void display()
	{
		cout<<this->real<<"+"<<this->imag<<"i";
	}
};
complex Div(float,complex);
int main()
{
	complex c1(50,100);
	complex c2(10,20);
	complex c3=c3.Div(c1,c2);
	cout<<"\n\n Division of Two complex dataype in structure function\n\n";
	c3.display();
	c3=c1.Div(15);
	cout<<"\n\n Division of One complex dataype and one int datatype in structure function\n\n";
	c3.display();
	cout<<"\n\n Division of One complex dataype and one int dataype in global function\n\n";
	c3=Div(15,c1);
	c3.display();
}
complex Div(float a,complex c1)
{
	complex temp;
	temp.real=a/c1.real;
	temp.imag=a/c1.imag;
	return temp;
}
