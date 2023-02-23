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
	complex sub(complex c1,complex c2)
	{
		complex temp;
		temp.real=c1.real-c2.real;
		temp.imag=c1.imag-c2.imag;
		return temp;
	}
    complex sub(int a) 
	{
		complex temp;
		temp.real=this->real-a;
		temp.imag=this->imag-a;
		return temp;
	} 
	void display()
	{
		cout<<this->real<<"+"<<this->imag<<"i";
	}
};
complex sub(int,complex);
int main()
{
	complex c1(10,20);
	complex c2(20,30);
	complex c3=c3.sub(c1,c2);
	cout<<"\n\n Substraction of Two complex dataype in structure function\n\n";
	c3.display();
	c3=c1.sub(50);
	cout<<"\n\n Substraction of One complex dataype and one int datatype in structure function\n\n";
	c3.display();
	cout<<"\n\n Substraction of One complex dataype and one int dataype in global function\n\n";
	c3=sub(50,c1);
	c3.display();
}
complex sub(int a,complex c1)
{
	complex temp;
	temp.real=a-c1.real;
	temp.imag=a-c1.imag;
	return temp;
}
