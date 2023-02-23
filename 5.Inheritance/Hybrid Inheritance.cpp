#include<iostream>
using namespace std;

class Player
{
	int noofmatchesplayed;
	int noofplayers;
	public:
	Player()
	{
		this->noofmatchesplayed=0;
		this->noofplayers=0;
	}
	Player(int nm,int np)
	{
		this->noofmatchesplayed=nm;
		this->noofplayers=np;
	}
	void set_noofmatchesplayed(int nm)
	{
		this->noofmatchesplayed=nm;
	}
	void set_noofplayers(int np)
	{
		this->noofplayers=np;
	}
	int get_noofmatchesplayed()
	{
		return this->noofmatchesplayed;
	}
	int get_noofplayers()
	{
		return this->noofplayers;
	}
	void display()
	{
		cout<<"\nnoofmatchesplayed: "<<this->noofmatchesplayed;
		cout<<"\nnoofplayers: "<<this->noofplayers;
	}
};
class Baller:public Player
{
	int wickets;
	public:
	//default constructor
	Baller():Player()
	{
		this->wickets=0;
	}
	Baller(int nm,int np,int w):Player(nm,np)
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
		Player::display();
		cout<<"\nBaller Wickets:"<<this->wickets;
	}
};
class Batsman: public Player
{
	int runs;
	public:
	//default constructor
	Batsman():Player()
	{
		this->runs=0;
	}
	Batsman(int nm,int np,int r):Player(nm,np)
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
		Player::display();
		cout<<"\nBatsman Runs:"<<this->runs;
	}
};
class AllRounder:public Baller,public Batsman
{
	public:
	AllRounder():Baller(),Batsman()
	{
		
	}
	AllRounder(int nm,int np,int w,int r):Baller(nm,np,w),Batsman(nm,np,r)
	{
		
	}
	void display()
	{
		Baller::display();
		cout<<"\n";
		Batsman::display();
	}
};
int main()
{
    AllRounder a(5,11,15,20);
    a.display();
    //	Baller b(10);
    //	b.display();
    //	Batsman bt(20);
    //	bt.display();
}

