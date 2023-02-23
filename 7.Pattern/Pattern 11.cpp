#include<iostream>
using namespace std;
int main()
{
	int i,j;
    int k=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			cout<<k<<" ";
		}
		k--;
		cout<<"\n";
	}
}
