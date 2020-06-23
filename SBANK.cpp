#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n,t,i,j;
	string x;
	string s;
	cin>>t;
	while(t--)
	{
	    map <string,int> hsh;
		cin>>n;
		for(i=0;i<n;i++)
		{
		    s="";
			for(j=0;j<6;j++)
			{
				cin>>x;
				s=s+x+" ";
			}
			hsh[s]++;
			
		}
		
		for(auto i:hsh)
		{
			cout<<i.first<<" "<<i.second<<endl;
		}
		cout<<endl;
		
	}
}