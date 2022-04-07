#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	int n;
	cin>>n;
	int l,r,x;
	int arr[n];
	for(int i=0;i<n;i++)
	 {
	       cin>>arr[i];
	 }
	 int prefix[n+1]={0};
	while(q--)
	{
	   cin>>l;
	   cin>>r;
	   cin>>x;
	   prefix[l]+=x;
	   prefix[r]-=x;

	}
	for(int i=1;i<n;i++)
	{
		prefix[i]+=prefix[i-1];
	}
	for(int i=0;i<n;i++)
	{
		 arr[i]+=prefix[i];
	}
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i];
	}
}
