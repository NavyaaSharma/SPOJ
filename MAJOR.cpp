#include <bits/stdc++.h> 
using namespace std;

int main()
{
	long long int t,n,i,f;
	cin>>t;
	while(t--)
	{
		f=0;
		unordered_map <long long int,long long int> m;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			m[a[i]]++;
		}
		
		for(auto i:m)
		{
			if(i.second>n/2)
			{
				cout<<"YES "<<i.first<<endl;
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"NO"<<endl;
		}
	}
}