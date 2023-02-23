#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int number;
	cout<<"Enter the odd number: ";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=number;j++)
		{
		    if(i==(number+2)/2 || j==(number+2)/2)
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
