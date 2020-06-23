//ANARC09A - Seinfeld

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int ctr=0,i;
  string str;
  do{
    stack <char> s;
    cin>>str;
    if(str[0]!='-')
    {
      ctr++;
      for(i=0;i<str.length();i++)
      {
        // cout<<"size"<<s.size()<<endl;
        if(str[i]=='{')
        {
          s.push(str[i]);
        }
        else if(str[i]=='}')
        {
          if(s.empty() || s.top()=='}')
          {
            s.push(str[i]);
          }
          else if(s.top()=='{')
          {
            s.pop();
          }
        }
        //cout<<"size"<<s.size()<<endl;
      }
        int ctr1=0,ctr2=0;
       //cout<<"sizezzz"<<s.size()<<endl;
        while(!s.empty())
        {
          //cout<<s.top()<<endl;
          if(s.top()=='{')
          ctr1++;
          
          else
          ctr2++;
          
          s.pop();
        }
        int res1=ceil((float)ctr1/2);
        int res2 = ceil((float)ctr2/2);
        cout<<ctr<<". "<<res1+res2<<endl;
    }
  }while(str[0]!='-');
  return 0;
}