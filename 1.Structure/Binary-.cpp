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
	complex(int r,int i)
	{
		this->real=r;
		this->imag=i;
	}
	//operator-
	complex operator-(complex c2)
    {
    	complex temp;
	    temp.real=real-c2.real;
	    temp.imag=imag-c2.imag;
	    return temp;
    }
    //display
	void display()
	{
		cout<<real<<"+"<<imag<<"i";
	}
};
int main()
{
	complex c1(10,20);
	complex c2(5,8);
	complex ans=c1-c2;
	ans.display();
}
