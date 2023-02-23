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
			if(j<=i || j>=number+1-i)
			{
				cout<<"*"<<" ";
			}
			else
			{
				cout<<j<<" ";
			}
		}
		cout<<"\n";
	}
}
