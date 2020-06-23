#include <bits/stdc++.h> 
using namespace std;
unordered_map <long long int,long long int> hsh;
unordered_map <long long int,long long int> m;
bool compare(long long int x,long long int y)
{
//	cout<<"for"<<x<<" "<<posx<<" "<<"for"<<y<<" "<<posy<<endl;;
	if(hsh[x]==hsh[y] && m[x]<m[y])
	return true;
	else
	return (hsh[x]>hsh[y]);
}
int main()
{
	long long int n,c,i;
	cin>>n>>c;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		hsh[a[i]]++;
	}
	for(i=n-1;i>=0;i--)
	{
		m[a[i]]=i;
	}
	sort(a,a+n,compare);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}