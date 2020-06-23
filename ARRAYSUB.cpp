// ARRAYSUB - subarrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  long long int n,k,i,j;
  cin>>n;
  long long int a[n];
  deque <long long int> q;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>k;
  for(int i=0;i<k;i++)
        {
            while(!q.empty() && a[i]>=a[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        for(int i=k;i<n;i++)
        {
            cout<<a[q.front()]<<" ";
            
            while(!q.empty() && q.front()<=i-k)
                q.pop_front();
            
            while(!q.empty() && a[i]>=a[q.back()])
                q.pop_back();
            q.push_back(i);
        }
    cout<<a[q.front()]<<" ";
    
  return 0;
}