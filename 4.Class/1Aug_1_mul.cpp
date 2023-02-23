#include<iostream>
using namespace std;
class Distance
{
	public:
	int feet,inches;
	//default constructor
	Distance()
	{
		this->feet=0;
		this->inches=0;
	}
	//parameterized constructor
	Distance(int a,int b)
	{
		this->feet=a;
		this->inches=b;
	}
	Distance mul(Distance c1,Distance c2)
	{
		Distance temp;
		temp.feet=c1.feet*c2.feet;
		temp.inches=c1.inches*c2.inches;
		return temp;
	}
    Distance mul(int a) 
	{
		Distance temp;
		temp.feet=this->feet*a;
		temp.inches=this->inches*a;
		return temp;
	} 
	void display()
	{
		cout<<this->feet<<" feet and "<<this->inches<<" inches";
	}
};
Distance mul(int,Distance);
int main()
{
	Distance c1(10,20);
	Distance c2(20,30);
	Distance c3=c3.mul(c1,c2);
	cout<<"\n\n multiplication of Two Distance in structure function\n\n";
	c3.display();
	c3=c1.mul(10);
	cout<<"\n\n multiplication of One Distance dataype and one int datatype in structure function\n\n";
	c3.display();
	cout<<"\n\n multiplication of One Distance dataype and one int dataype in global function\n\n";
	c3=mul(10,c1);
	c3.display();
}
Distance mul(int a,Distance c1)
{
	Distance temp;
	temp.feet=a*c1.feet;
	temp.inches=a*c1.inches;
	return temp;
}
