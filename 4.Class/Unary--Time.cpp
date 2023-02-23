#include<iostream>
using namespace std;
class Time
{
	public:
	int h,m,s;
	//default constructor
	Time()
	{
		this->h=0;
		this->m=0;
		this->s=0;
	}
	//parameterized constructor
	Time(int a,int b,int c)
	{
		this->h=a;
		this->m=b;
		this->s=c;
	}
	//PostIncrement
	Time operator--()
	{
		Time temp;
		temp.h=this->h--;
		temp.m=this->m--;
		temp.s=this->s--;
		return temp;
	}
	//display
	void display()
	{
		cout<<h<<"hr:"<<m<<" min:"<<s<<" sec\n";
	}
};
int main()
{
	Time c1(6,2,2);
	Time c2;
    c2=c1.operator--();
    c2.display();
    c1.display();
    Time c3;
    c3=--c1;
    c1.display();
    c3.display();
}
