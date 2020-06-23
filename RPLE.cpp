#include<iostream>
using namespace std;
//if spy-2 if civilian -1
int main()
{
	int t,r1,r2,n,q,f;
	cin>>t;
	int ctr=0;
	while(t--)
	{
		ctr++;
		f=0;
		cin>>n>>q;
		int a[1000]={0};
		//cout<<a[1]<<endl;
		int sp[q], c[q];
        for (int i=0; i<q; i++)
        {
            int a, b;
            cin>>a>>b;
            sp[i] = a;
            c[i] = b;
        }
        for(int i=0;i<q;i++)
        {
			if(a[sp[i]]==1)
			{
				//cout<<"1 "<<a[r1]<<endl;
				f=1;
				break;
			}
			else
			{
				a[sp[i]]=2;
				if(a[c[i]]==2)
				{
					//cout<<"2 "<<a[r1]<<endl;
					f=1;
					break;
				}
				else
				{
					a[c[i]]=1;
				}
			}
		}
		if(f==1)
		{
			cout<<"Scenario #"<<ctr<<": "<<"spied"<<endl;
		}
		else
		{
			cout<<"Scenario #"<<ctr<<": "<<"spying"<<endl;
		}
	}
}