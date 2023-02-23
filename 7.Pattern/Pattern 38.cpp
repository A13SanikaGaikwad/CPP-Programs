#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter the Number of rows: ";
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row;j++)
		{
		   if(i==3 || i==4 )
		   {
		   	cout<<j*2<<" ";
		   }
		   else
		   {
		   	cout<<" "<<" ";
		   }
		}
		cout<<"\n";
	}
}
