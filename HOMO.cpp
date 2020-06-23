#include <bits/stdc++.h> 
using namespace std;
map <long long int,long long int> hsh;

int main()
{
	long long int t,i,j,num,ctn=0,ctu=0;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s>>num;
		if(s=="insert")
		{
		    if(hsh[num]==0)
		    {
		        ctu++;
		    }
		    ctn++;
			hsh[num]++;
			
		}
		else
		{
			if(hsh[num]!=0)
			{
				if(hsh[num]==1)
				{
				    ctu--;
				}
				ctn--;
				hsh[num]--;
			}
		}
		int homo=0,hetro=0;
		if(ctu>=2)
		{
		    hetro=1;
		}
		if(ctu<ctn)
		{
		    homo=1;
		}
		
		if(homo==1 && hetro==1)
    	{
    		cout<<"both"<<endl;
    	}
    	else if(homo==0 && hetro==1)
    	{
    		cout<<"hetero"<<endl;
    	}
    	else if(homo==1 && hetro==0)
    	{
    		cout<<"homo"<<endl;
    	}
    	else if(homo==0 && hetro==0)
    	{
    		cout<<"neither"<<endl;
    	}
		
	}
}