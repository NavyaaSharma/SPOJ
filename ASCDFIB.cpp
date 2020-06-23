//Ascending Fibonacci Numbers

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    int t;
    cin>>t;
    int hsh[1110000];
    hsh[1] = 0;
    hsh[2] = 1;
    lli d = 100000;

    for (lli i=3; i<=1110000; i++)
    {
        hsh[i] = ((hsh[i-1]%d) + (hsh[i-2]%d))%d;
    }

    for (int _=1; _<=t; _++)
    {
        lli a, b;
        cin>>a>>b;

        int h[100000];
        for (int i=0; i<100000; i++)
            h[i] = -1;
        for (int i=0; i<=b; i++)
            h[hsh[a+i]] ++;

        cout<<"Case "<<_<<": ";
        int cnt=100;
        for (int i=0; i<100000; i++)
        {
            
			if(h[i]!=-1)
			{
				for (int j=0; j<=h[i]; j++)
            {
                cout<<i<<" ";
                cnt--;
                if (cnt==0)
                    break;
            }
            if (cnt==0)
                break;
			}
            
        }
        cout<<endl;
    }
    return 0;
}