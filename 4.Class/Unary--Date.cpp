#include<iostream>
using namespace std;
class Date
{
	public:
	int d,m,y;
	//default constructor
	Date()
	{
		this->d=0;
		this->m=0;
		this->y=0;
	}
	//parameterized constructor
	Date(int a,int b,int c)
	{
		this->d=a;
		this->m=b;
		this->y=c;
	}
	//PostIncrement
	Date operator--()
	{
		Date temp;
		temp.d=this->d--;
		temp.m=this->m--;
		temp.y=this->y--;
		return temp;
	}
	//display
	void display()
	{
		cout<<d<<"/"<<m<<"/"<<y<<"\n";
	}
};
int main()
{
	Date c1(13,9,2000);
	Date c2;
    c2=c1.operator--();
    c2.display();
    c1.display();
    Date c3;
    c3=--c1;
    c1.display();
    c3.display();
}
