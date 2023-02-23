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
	int operator>(Distance c2)
	{
		if(this->f > c2.f)
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
	Distance c1(10,20);
	Distance c2(5,8);
	if(c1>c2)
	{
		cout<<"C1 is Greater";
	}
	else
	{
		cout<<"C2 is Greater";
	}
}
