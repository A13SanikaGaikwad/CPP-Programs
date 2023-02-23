//Hollow Square
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int number;
	printf("Enter the Number: ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=number;j++)
		{
			if(i==1 || i==number || j==number || j==1 )
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
