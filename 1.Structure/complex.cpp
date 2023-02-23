#include<stdio.h>

struct complex
{
	int real,imag;
	
	void display()
    {
	    printf("Complex Number: %d + %di ",this->real,this->imag);
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
	complex()
	{
		this->real=0;
		this->imag=0;
	}
	complex(int a,int b)
	{
		this->real=a;
		this->imag=b;
	}	
};
int main()
{
	complex c1;
	c1.display();
	complex c2(10,20);
	c2.display();
}


