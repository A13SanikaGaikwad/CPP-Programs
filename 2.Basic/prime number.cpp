#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Enter a Number: ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i == 0)
		{
			cout<<"\n "<<num<<"is not a prime Number";
			break;
		}	
	}
	
	if(i == num)
	{
    	cout<<"\n"<<num<<" is a prime Number";
    }
}
