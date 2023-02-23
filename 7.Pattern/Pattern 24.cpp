//Hollow Right Triangle Star

#include<iostream>
using namespace std;

int main()
{
	int i,j,number;
	cout<<"Enter the Number : ";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || i==j || i==number)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
