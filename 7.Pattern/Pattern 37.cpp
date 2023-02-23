#include<iostream>
using namespace std;

int main()
{
	int i,j,n,m;
	cout<<"Enter the row: ";
    cin>>n;
	cout<<"Enter the Column: ";
	cin>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
				cout<<"*"<<" ";
		}
		cout<<"\n";
	}
}


