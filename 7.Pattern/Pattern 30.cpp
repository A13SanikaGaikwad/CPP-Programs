#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,row;
	cout<<"Enter the row: ";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row+1-i;j++)
		{
		    cout<<" "<<k<<" ";
		    k++;
		}
		cout<<"\n";
	}
}
