#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		char ch='A';
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
			  cout<<ch<<" ";
			  ch++;	
			}
			else
			{
			  cout<<" "<<" ";
			}
		}
		for(j=5;j>=1;j--)
		{
			if(j<=i)
			{
			  cout<<ch<<" ";
			  ch++;	
			}
			else
			{
			  cout<<" "<<" ";
			}
		}
		cout<<"\n";
	}
}
