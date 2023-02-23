#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	
	int q,r,sum=0;
	
	for(sum=0;num>0;num=q)
	{
		q=num/10;
		r=num%10;
		
		sum=sum+r;
		
	}
	cout<<"sum of Digits is "<<sum;
}
