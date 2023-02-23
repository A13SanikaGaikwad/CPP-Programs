//function overloading

#include<stdio.h>
#include<string.h>
class printer
{
	public:
	void print()
	{
		
	}
	void print(int a)
	{
		printf("\n%d",a);
	}
	void print(char b)
	{
		printf("\n%c",b);
	}
	void print(char* c)
	{
		printf("\n%s",c);
	}
};
int main()
{
	printer p1;
	p1.print();
	p1.print(10);
	p1.print('A');
	p1.print("Firstbit");
}
