#include <bits/stdc++.h>
//#include <stack>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin>>n;
        if (n==0)
            break;

        int ar[n];
        for (int i=0; i<n; i++)
            cin>>ar[i];

        stack<int> st;
        int ord=1, f=0;
        for (int i=0; i<n; i++)
        {
            while(!st.empty() && st.top()==ord)
            {
                ord++;
                st.pop();
            }
            if (ar[i]==ord)
            {
                ord++;
            }
            else if (!st.empty() && ar[i]>st.top())
            {
                f = 1;
                break;
            }
            else
            {
                st.push(ar[i]);
            }
        }
        if (f==1)
            cout<<"no";
        else
            cout<<"yes";
        cout<<endl;
    }
    return 0;
}