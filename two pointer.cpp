#include<bits/stdc++.h>
using namespace std;

	
	bool is_palin(string &s)
	{
        int i=0;
	    int j=s.size()-1;
	    while(i<=j)
	    {
	        if(s[i]!=s[j])
	        {
	            return false;
	        }
	        i++;
	        j--;

	    }
	}
	int main()
{
	string s;
	cin>>s;
	if(is_palin(s))
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	
}