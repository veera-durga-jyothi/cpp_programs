#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//n=7 when n is repeating n-1 times
	int n,i,fact=0;
	cout<<"enter the value of n:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			
			fact=fact+1;
	        cout<<"not prime";
			break;
		}
		
	}
	if(fact==0)
	{
		cout<<"prime number";
	}
}
//when n=n/2
#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=0;
	cout<<"enter the value of n:";
	cin>>n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			fact+=1;
			cout<<"not prime";
			break;
		}
	}
	if(fact==0)
	{
		cout<<"prime number";
	}
	return 0;
}
//when n is the sqrt of the number then also we can find prime/not for a given number
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int i,n,fact=0;
	cout<<"enter the value of n:";
	cin>>n;
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
			fact+=1;
			cout<<"not prime";
			break;
		}
	}
	if(fact==0)
	{
		cout<<"prime number";
	}
	return 0;}
