#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			cout<<" "<<" ";
		}
	    for(j=1;j<=i;j++)
	    {
	    	if(j==1||i==j||i==5)
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
