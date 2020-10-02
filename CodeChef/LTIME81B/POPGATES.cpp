#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        char ch;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            if(ch=='H')
            {
                a[i]=1;
            }
            else
            {
                a[i]=0;
            }
        }
        for(int i=n-1;i>=n-k;i--)
        {
            if(a[i]==1)
            {
                for(int j=0;j<i;j++)
                {
                    a[j]=1-a[j];
                }
            }
        }
        for(int i=0;i<n-k;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
