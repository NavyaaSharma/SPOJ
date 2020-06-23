#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
int main()
{
    lli n,i,x,count=0;
    cin>>n;
    stack <lli> s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(s.empty())
        {
            s.push(x);
        }
        else if(!s.empty() && x<=s.top())
        {
            s.push(x);
        }
        while(!s.empty() && x>s.top())
        {
            if(s.size()==1)
            {
                s.pop();
                s.push(x);
                count+=x;
            }
            else
            {
                s.pop();
                count+=min(x,s.top());
                if(!s.empty() && x<=s.top())
                {
                    s.push(x);
                }
            }
        }
    }
    //cout<<s.size()<<endl;
    if(s.size()!=1)
    {
        // cout<<s.top()<<endl;
        s.pop();
        while(!s.empty())
        {
            count+=s.top();
            //cout<<s.top()<<endl;
            s.pop();
        }
    }
    cout<<count<<endl;
    return 0;
}
