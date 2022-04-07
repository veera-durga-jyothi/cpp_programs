#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int>a;
	int t;
	cin>>t;
	
	for(int i=0;i<n;i++)
	{
	    cin>>x;
	    a.emplace_back(x);

	}
	

    //sort(a.begin(),a.end(),greater<int>());
    //a.erase(a.begin());
    int ind=lower_bound(a.begin(),a.end(),t)-a.begin();
    cout<<ind;
	for(auto it:a)
	{
		cout<<it<<endl;
	}


}