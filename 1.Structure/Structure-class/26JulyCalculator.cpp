//function overloading

#include<stdio.h>
#include<string.h>

class calculator
{
	public:
	void add(int a,int b)
	{
		printf("add: %d",a+b);
	}
	void add(float f1,float f2)
	{
	   printf("\nadd: %f",f1+f2);	
	}
	void sub(int a,int b)
	{
		printf("\nsub: %d",a-b);
	}
	void sub(float f1,float f2)
	{
	   printf("\nsub: %f",f1-f2);	
	}
	void mul(int a,int b)
	{
		printf("\nmul: %d",a*b);
	}
	void mul(float f1,float f2)
	{
	   printf("\nmul: %f",f1*f2);	
	}
	void div(int a,int b)
	{
		printf("\ndiv: %d",a/b);
	}
	void div(float f1,float f2)
	{
	   printf("\ndiv: %f",f1/f2);	
	}
};
int main()
{
	calculator c1;
	int x=10;
	int y=20;
	float f1=10.8;
	float f2=20.8;
	c1.add(x,y);
	c1.add(f1,f2);
	c1.sub(x,y);
	c1.sub(f1,f2);
	c1.mul(x,y);
	c1.mul(f1,f2);
	c1.div(x,y);
	c1.div(f1,f2);
}
