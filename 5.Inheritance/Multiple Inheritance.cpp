#include<iostream>
using namespace std;

class Baller
{
	int wickets;
	public:
	//default constructor
	Baller()
	{
		this->wickets=0;
	}
	Baller(int w)
	{
		this->wickets=w;
	}
	void set_wickets(int w)
	{
		this->wickets=w;
	}
	int get_wickets()
	{
		return this->wickets;
	}
	void display()
	{
		cout<<"\nBaller Wickets:"<<this->wickets;
	}
};
class Batsman
{
	int runs;
	public:
	//default constructor
	Batsman()
	{
		this->runs=0;
	}
	Batsman(int r)
	{
		this->runs=r;
	}
	void set_runs(int r)
	{
		this->runs=r;
	}
	int get_runs()
	{
		return this->runs;
	}
	void display()
	{
		cout<<"\nBatsman Runs:"<<this->runs;
	}
};
class AllRounder:public Baller,public Batsman
{
	public:
	AllRounder():Baller(),Batsman()
	{
		
	}
	AllRounder(int w,int r):Baller(w),Batsman(r)
	{
		
	}
	void display()
	{
		Baller::display();
		Batsman::display();
	}
};
int main()
{
    AllRounder a(10,20);
    a.display();
    //	Baller b(10);
    //	b.display();
    //	Batsman bt(20);
    //	bt.display();
}

