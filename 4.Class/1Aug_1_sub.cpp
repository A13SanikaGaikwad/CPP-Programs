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
	Distance sub(Distance c1,Distance c2)
	{
		Distance temp;
		temp.feet=c1.feet-c2.feet;
		temp.inches=c1.inches-c2.inches;
		return temp;
	}
    Distance sub(int a) 
	{
		Distance temp;
		temp.feet=this->feet-a;
		temp.inches=this->inches-a;
		return temp;
	} 
	void display()
	{
		cout<<this->feet<<" feet and "<<this->inches<<" inches";
	}
};
Distance sub(int,Distance);
int main()
{
	Distance c1(10,20);
	Distance c2(20,30);
	Distance c3=c3.sub(c1,c2);
	cout<<"\n\n Substraction of Two Distance in structure function\n\n";
	c3.display();
	c3=c1.sub(50);
	cout<<"\n\n Substraction of One Distance dataype and one int datatype in structure function\n\n";
	c3.display();
	cout<<"\n\n Substraction of One Distance dataype and one int dataype in global function\n\n";
	c3=sub(50,c1);
	c3.display();
}
Distance sub(int a,Distance c1)
{
	Distance temp;
	temp.feet=a-c1.feet;
	temp.inches=a-c1.inches;
	return temp;
}
