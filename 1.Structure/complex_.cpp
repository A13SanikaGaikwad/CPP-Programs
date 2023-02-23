#include<stdio.h>
#include<string.h>

struct complex
{
	int real,imag;
	
	void setreal(int a)
	{
	    this->real=a;
	}
	void setimag(int b)
	{
		this->imag=b;
	}
	int getreal()
	{
		return this->real;
	}
    int getimag()
	{
		return this->imag;
	}
}; 
int main()
{
	complex c1;
	c1.setreal(10);
	c1.setimag(20);
	printf("Complex No: %d + %di",c1.getreal(),c1.getimag());
}
