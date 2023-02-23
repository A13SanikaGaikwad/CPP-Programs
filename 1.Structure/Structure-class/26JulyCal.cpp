//function overloading

#include<stdio.h>
#include<string.h>

class calculator
{
	public:
	void add(int a,int b)
	{
		printf("%d",a+b);
	}
	void add(float f1,float f2)
	{
	   printf(" %f",f1+f2);	
	}
};
int main()
{
	calculator c1;
	int x=10;
	int y=20;
	c1.add(x,y);
	float f1=10.8;
	float f2=20.8;
	c1.add(f1,f2);
}
