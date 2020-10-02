#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k,c=0;
        char ch;
        cin>>n>>k;
        lli a[n];
        for(lli i=0;i<n;i++)
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
        for(lli i=n-1;i>=n-k;i--)
        {
            if(a[i]==1)
            {
                for(int j=0;j<i;j++)
                {
                    a[j]=1-a[j];
                }
            }
        }
        for(lli i=0;i<n-k;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
