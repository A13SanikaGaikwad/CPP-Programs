#include<iostream>
using namespace std;
class Distance
{
	public:
	float feet,inches;
	//default constructor
	Distance()
	{
		this->feet=0;
		this->inches=0;
	}
	//parameterized constructor
	Distance(float a,float b)
	{
		this->feet=a;
		this->inches=b;
	}
	Distance Div(Distance c1,Distance c2)
	{
		Distance temp;
		temp.feet=c1.feet/c2.feet;
		temp.inches=c1.inches/c2.inches;
		return temp;
	}
    Distance Div(float a) 
	{
		Distance temp;
		temp.feet=this->feet/a;
		temp.inches=this->inches/a;
		return temp;
	} 
	void display()
	{
		cout<<this->feet<<" feet and "<<this->inches<<" inches";
	}
};
int main()
{
	Distance c1(10,20);
	Distance c2(20,30);
	Distance c3=c3.Div(c1,c2);
	cout<<"\n\n Division of Two Distance in structure function\n\n";
	c3.display();
	c3=c1.Div(10);
	cout<<"\n\n Division of One Distance dataype and one int datatype in structure function\n\n";
	c3.display();
}
