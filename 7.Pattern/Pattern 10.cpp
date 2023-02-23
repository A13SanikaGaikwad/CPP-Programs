#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		int k=5;
		for(j=1;j<=6-i;j++)
		{
		  cout<<k<<" ";
		  k--;
		}
		cout<<"\n";
	}
}
