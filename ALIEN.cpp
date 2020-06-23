#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, m,t;
    cin>>t;
    while(t--)
    {
    cin>>n>>m;
        map<lli,lli> hsh;
    vector<lli> ar;
    for (lli i=0; i<n; i++)
    {
        lli a;
        cin>>a;
        ar.push_back(a);
    }

    lli i=0, j=1, mx=-1, sm=ar[0], f=0, cnt=0,cmax=0;
    while (j<n)
    {
        if (sm<=m)
        {
            cnt++;
            if(cnt>=cmax)
            {
                if(hsh[cnt]==0)
                hsh[cnt]=sm;
                else
                {
                    if(sm!=0)
                    {
                        hsh[cnt]=min(hsh[cnt],sm);
                    }
                }
                
            }
            cmax=max(cnt,cmax);
        }
        while(sm+ar[j]>m && i<j)
        {
            sm -= ar[i];
            i++;
            if(cnt!=0)
            cnt--;
        }
        sm += ar[j];
        j++;
        
        if(j==n && sm<=m)
        {
       
            cnt++;
            if(hsh[cnt]==0)
                hsh[cnt]=sm;
                else
                hsh[cnt]=min(hsh[cnt],sm);
            cmax=max(cmax,cnt);
        }

    }

    cout<<hsh[cmax]<<" "<<cmax<<endl;
}
    return 0;
}