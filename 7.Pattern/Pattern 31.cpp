//Down Triangle 
#include<iostream>
using namespace std;
int main()
{
	int i,j,row;
	cout<<"Enter the row: ";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row+1-i;j++)
		{
		    if(i==1 || j==1 || j==2)
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
