//Hotels Along the Croatian Coast

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, m;
    cin>>n>>m;

    vector<lli> ar;
    for (lli i=0; i<n; i++)
    {
        lli a;
        cin>>a;
        ar.push_back(a);
    }

    lli i=0, j=1, mx=-1, sm=ar[0], f=0;
    while (j<n)
    {
        if (sm<=m)
            mx = max(sm, mx);
        while (sm+ar[j]>m && i<j)
        {
            sm -= ar[i];
            i++;
        }
        sm += ar[j];
        j++;
    }

    cout<<mx;

    return 0;
}