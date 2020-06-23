#include <bits/stdc++.h> 
using namespace std;
map <long long int,long long int> hsh;
int a[100000000]={0};
int main()
{
	long long int n,i,val;
	        hsh[0]=0;
	        a[0]=1;
	        for(i=1;i<500000;i++)
	        {
	            val=hsh[i-1]-i;
	            if(val<=0 || a[val]==1 )
	            {
	                val=hsh[i-1]+i;
	            }
	            a[val]=1;
	            hsh[i]=val;
	        }
	while (1)
    {
        int k;
        cin>>k;

        if (k==-1)
            break;

        cout<<hsh[k]<<endl;
    }
	return 0;
}