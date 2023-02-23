/*write a program which calculates toll calculation on some location following is data provided:
many vehicles go through the toll.
every vehicle has to pay the basic toll + extra charges if any.
1.two wheelers have to pay the basic toll of Rs 20.
2.three wheelers have to pay Rs 30.
3.Four wheelers have to pay Rs 40.
Heavy vehicles i.e.,wheels more than four, have to pay 60 Rs as basic toll extra charges:
1.on two wheelers if no.of persons is more than 2 extra charges =10/Person.
2.on three wheelers if no.of persons is more than 3 extra charges =20/Person.
3.on four wheelers if no.of persons is more than 4 extra charges =40/Person.
4.In heavy vehicle if no.of person are more than 6 extra charges=100/Person.
Show the polymorphic behaviour in main.
main should be designed in such a way that toll operator should easily operate it through interative menu driven program.
Only Vehicle Object should not be possible.
Object without person should not be possible for any of the vehicle type.
*/

#include<iostream>
using namespace std;
class vehicle
{
	protected:
	int basic_toll;
	int extra_charges;
	public:
	virtual double toll()=0;
	//default constructor of vehicle
	vehicle()
	{
		this->basic_toll=0;
		this->extra_charges=0;
	}
	//set_basic_toll and set_extra_charges
	void set_basic_toll(int bt)
	{
		this->basic_toll=bt;
	}
	void set_extra_charges(int e)
	{
		this->extra_charges=e;
	}
	//get_basic_toll and get_extra_charges
	int get_basic_toll()
	{
		return this->basic_toll;
	}
	int get_extra_charges()
	{
		return this->extra_charges;
	}
	void display()
	{
		cout<<"\nBasic Toll :"<<this->basic_toll;
		cout<<"\nExtra Charges:"<<this->extra_charges;
	}
};
class two_wheelers: public vehicle
{
	int person;
	public:
	//default constructor of two_wheelers
	two_wheelers():vehicle()
	{
		this->person=0;
	}
	void set_person(int p)
	{
		this->person=p;
	}
	int get_person()
	{
		return this->person;
	}
	void display()
	{
		cout<<"\nno.of person in Two wheeler: ";
		cin>>person;
		if(this->person > 2)
		{
			this->extra_charges=10*(this->person-2);
		}
		else
		{
			this->extra_charges=0;
		}
		vehicle::display();
	}
	double toll()
	{
		return(this->extra_charges + this->basic_toll);
	}
};
class three_wheelers: public vehicle
{
	int person;
	public:
	//default constructor of three_wheelers
	three_wheelers():vehicle()
	{
		this->person=0;
	}
	void set_person(int p)
	{
		this->person=p;
	}
	int get_person()
	{
		return this->person;
	}
	void display()
	{
		cout<<"\nno.of person in Three wheeler: ";
		cin>>person;
		if(this->person > 3)
		{
			this->extra_charges=20*(this->person-3);
		}
		else
		{
			this->extra_charges=0;
		}
		vehicle::display();
	}
	double toll()
	{
		return(this->extra_charges + this->basic_toll);
	}
};
class four_wheelers: public vehicle
{
	int person;
	public:
	//default constructor of four_wheelers
	four_wheelers():vehicle()
	{
		this->person=0;
	}
	void set_person(int p)
	{
		this->person=p;
	}
	int get_person()
	{
		return this->person;
	}
	void display()
	{
		cout<<"\nno.of person in four wheeler: ";
		cin>>person;
		if(this->person > 4)
		{
			this->extra_charges=40*(this->person-4);
		}
		else
		{
			this->extra_charges=0;
		}
		vehicle::display();
	}
	double toll()
	{
		return(this->extra_charges + this->basic_toll);
	}
};
class heavy_vehicles: public vehicle
{
	int person;
	public:
	//default constructor of heavy_vehicles
	heavy_vehicles():vehicle()
	{
		this->person=0;
	}
	void set_person(int p)
	{
		this->person=p;
	}
	int get_person()
	{
		return this->person;
	}
	void display()
	{
		cout<<"\nno.of person in heavy_vehicles: ";
		cin>>person;
		if(this->person > 6)
		{
			this->extra_charges=100*(this->person-6);
		}
		else
		{
			this->extra_charges=0;
		}
		vehicle::display();
	}
	double toll()
	{
		return(this->extra_charges + this->basic_toll);
	}
};
int main()
{
	int v;
	cout<<"Enter your Vehicle:";
	cout<<"\n1.Two_Wheelers";
	cout<<"\n2.Three_Wheelers";
	cout<<"\n3.Four_Wheelers";
	cout<<"\n4.Heavy_Vehicles";
	cout<<"\n5.Exit";
	cout<<"\n";
	cin>>v;
	
	switch(v)
	{
		case 1:
			{
				two_wheelers tw;
				tw.set_basic_toll(20);
	            tw.display();
	            cout<<"\nToll is: "<<tw.toll();
	            break;
			}
		case 2:
			{
				three_wheelers thw;
				thw.set_basic_toll(30);
	            thw.display();
	            cout<<"\nToll is: "<<thw.toll();
	            break;
			}
		case 3:
			{
				four_wheelers fw;
				fw.set_basic_toll(40);
	            fw.display();
	            cout<<"\nToll is: "<<fw.toll();
	            break;
			}
		case 4:
			{
				heavy_vehicles hw;
				hw.set_basic_toll(60);
				hw.display();
				cout<<"\nToll is: "<<hw.toll();
				break;
			}
		case 5:
			{
				exit(0);
				break;
			}	
    }
	
}
