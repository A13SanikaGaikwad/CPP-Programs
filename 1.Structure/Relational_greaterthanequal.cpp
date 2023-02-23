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
	int operator>=(complex c2)
	{
		if(this->real >= c2.real)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int main()
{
	complex c1(10,20);
	complex c2(5,8);
	if(c1>=c2)
	{
		cout<<"C1 is Greater than Equal to C2";
	}
	else
	{
		cout<<"C2 is Greater than Equal to C1";
	}
}
