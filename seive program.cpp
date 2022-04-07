//prime count by using seive
#include<bits/stdc++.h>
using namespace std;
vector<bool>primes(1000001,true);
void Gen_seive(int n)
{
	
	primes[0]=primes[1]=false;

	for(int i=2;i*i<=n;i++)
	{
		if(primes[i]==true)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				primes[j]=false;
			}
			
		}
	}
}
	
	

int main()
{
   //seive concept
   
   
    int t;
    cin>>t;
    while(t!=0)
    {
    	long long int n;
    	cin>>n;
    	Gen_seive(n);
    	
	
	int c=0;
	for(int i=2;i<=n;i++)
	{
		if(primes[i]==true)
		{
			c++;
		}
		t--;
	}
	cout<<c;
}
	
		

}
