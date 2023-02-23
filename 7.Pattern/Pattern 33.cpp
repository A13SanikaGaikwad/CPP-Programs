#include<iostream>
using namespace std;
int main()
{
	int i,j,row;
	cout<<"Enter the row: ";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row-1+i;j++)
		{
		    if(j==i || i==1 || i==row || j==row-1+i)
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
