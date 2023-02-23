//x Star Pattern

#include<iostream>
using namespace std;

int main()
{
	int i,j,number;
	cout<<"Enter the Number: ";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=number;j++)
		{
			if(i==j || j==number-i+1)
			{
				cout<<"*"<<" ";
			}
			else
			{
				cout<<" "<<" ";
			}
		}
		cout<<"\n";
	}
}
