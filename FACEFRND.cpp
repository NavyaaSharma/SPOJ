#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m,i,ctr=0,bf,x;
	int hash[10000]={0};
	vector <int> v;
	cin>>n;
	while(n--)
	{
		cin>>bf>>m;
		for(i=0;i<m;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		hash[bf]=-1;
		
	}
	for(i=0;i<v.size();i++)
	{
		if(hash[v[i]]==0)
		{
			ctr++;
			hash[v[i]]=1;
		}
	}
	cout<<ctr<<endl;
	return 0;
}