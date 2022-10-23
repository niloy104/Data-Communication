#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,a[100],j=0;
	cout<<"Enter how many bits of no you want to create:"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array of binary integers:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The binary no. array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	cout<<"Counting the no. of 1 in the binary integers array...."<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			j=j+1;
		}
	}
	cout<<"The no. of 1 in the array is:"<<j<<endl;
	if(j%2==0)
	{
		cout<<"It is even parity"<<endl;
		a[n]=0;
		cout<<"So the no. would be:"<<endl;
		for(i=0;i<=n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	else
	{
		cout<<"It is a odd parity."<<endl;
		a[n]=1;
		cout<<"So the no. would be:"<<endl;
		for(i=0;i<=n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}