//Simple Brute Force
#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli x,n,p;
        cin>>n>>p;
        lli a[n+1][n+1];
        for(lli i=1;i<=n;i++)
        {
            for(lli j=1;j<=n;j++)
            {
                cout<<1<<" "<<(i)<<" "<<(j)<<" "<<(i)<<" "<<(j)<<"\n";
                cin>>x;
                if(x==0)
                {
                    a[i][j]=0;
                }
                else
                {
                    a[i][j]=1;
                }
            }
        }
        cout<<2<<"\n";
        for(lli i=1;i<n+1;i++)
        {
            for(lli j=1;j<n+1;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cin>>x;
        if(x==-1)
        {
            break;
        }
    }
	return 0;
}
