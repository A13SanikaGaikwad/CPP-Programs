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
	Distance(int f,int i)
	{
		this->f=f;
		this->i=i;
	}
	//operator+
	Distance operator+(Distance c2)
    {
    	Distance temp;
	    temp.f=f+c2.f;
	    temp.i=i+c2.i;
	    return temp;
    }
    //display
	void display()
	{
		cout<<f<<" feet and "<<i<<" inches";
	}
};
int main()
{
	Distance c1(10,20);
	Distance c2(5,8);
	Distance ans=c1+c2;
	ans.display();
}
