#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
		    cout<<j<<" ";
		}
		for(j=1;j<=i-1;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}
