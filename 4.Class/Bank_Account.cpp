#include<iostream>
#include<string.h>
using namespace std;

class Bank_Account
{
	int AccNo;
	char name[10];
	double balance;
	double interestrate;
	public:
	//default constructor of Bank_Account
	Bank_Account()
	{
		this->AccNo=0;
		strcpy(this->name,"not given");
		this->balance=0;
		this->interestrate=0;
	}
	//Parameterized constructor of Bank_Account
	Bank_Account(int a,char* n,double b,double i)
	{
		this->AccNo=a;
		strcpy(this->name,n);
		this->balance=b;
		this->interestrate=i;
	}
	void set_AccNo(int a)
	{
		this->AccNo=a;
	}
	void set_name(char*n)
	{
		strcpy(this->name,n);
	}
	void set_balance(double b)
	{
		this->balance=b;
	}
	void set_interestrate(double i)
	{
		this->interestrate=i;
	}
	int get_AccNo(int a)
	{
		return this->AccNo;
	}
	char* get_name(char*n)
	{
		return this->name;
	}
	double get_balance(double b)
	{
		return this->balance;
	}
	double get_interestrate(double i)
	{
		return this->interestrate;
	}
	void display()
	{
		cout<<"\nAccount No is: "<<this->AccNo;
		cout<<"\nName is: "<<this->name;
		cout<<"\nBalance is: "<<this->balance;
		cout<<"\nInterest Rate: "<<this->interestrate;
	}	
};
int main()
{
	Bank_Account b(10,"soni",50000,8);
	b.display();
}

