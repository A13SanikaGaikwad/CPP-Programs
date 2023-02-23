#include<iostream>
using namespace std;
class Distance
{
	public:
	int f,i;
	//default constructor
	Distance()
	{
		this->f=0;
		this->i=0;
	}
	//parameterized constructor
	Distance(int a,int b)
	{
		this->f=a;
		this->i=b;
	}
	//PostIncrement
	Distance operator++()
	{
		Distance temp;
		temp.f=this->f++;
		temp.i=this->i++;
		return temp;
	}
	//display
	void display()
	{
		cout<<f<<" feet and "<<i<<" inches"<<"\n";
	}
};
int main()
{
	Distance c1(10,20);
	Distance c2;
    c2=c1.operator++();
    c2.display();
    c1.display();
    Distance c3;
    c3=++c1;
    c1.display();
    c3.display();
}
