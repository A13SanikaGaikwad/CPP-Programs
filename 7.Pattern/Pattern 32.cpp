#include<iostream>
using namespace std;
int main()
{
	int i,j,row;
	cout<<"Enter the row: ";
	cin>>row;
	for(i=row;i>0;i--)
	{
		for(j=i;j<=row;j++)
		{
		   cout<<j<<" ";
		}
		cout<<"\n";
	}
}
