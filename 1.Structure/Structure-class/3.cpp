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
	complex add(complex c2)
	{
		complex temp;
		temp.real=this->real+c2.real;
		temp.imag=this->imag+c2.imag;
		return temp;
	}
    complex add(int a) 
	{
		complex temp;
		temp.real=this->real+a;
		temp.imag=this->imag+a;
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
	complex c2(5,8);
	complex ans;
	ans=c1.add(c2);
	cout<<"\n\n Addition of c1 complex datatype in c2 complex datatype in structure function\n\n";
	ans.display();
	complex c3;
	c3=c1.add(10);
	cout<<"\n\n Addition of One complex dataype and one int datatype in structure function\n\n";
	c3.display();
}
