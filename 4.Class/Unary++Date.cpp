#include<iostream>
using namespace std;
class date
{
	public:
	int d,m,y;
	//default constructor
	date()
	{
		this->d=0;
		this->m=0;
		this->y=0;
	}
	//parameterized constructor
	date(int a,int b,int c)
	{
		this->d=a;
		this->m=b;
		this->y=c;
	}
	//PostIncrement
	date operator++()
	{
		date temp;
		temp.d=this->d++;
		temp.m=this->m++;
		temp.y=this->y++;
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
	date c1(13,9,2000);
	date c2;
    c2=c1.operator++();
    c2.display();
    c1.display();
    date c3;
    c3=++c1;
    c1.display();
    c3.display();
}
