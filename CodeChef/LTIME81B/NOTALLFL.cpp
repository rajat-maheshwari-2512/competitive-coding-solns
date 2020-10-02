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
        lli n,k,max=0,c=0,flag=0;
        cin>>n>>k;
        lli a[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(lli i=0;i<n;i++)
        {
            flag=0;
            for(lli j=i;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
                else
                {
                    if(c>max)
                    {
                        max=c;
                    }
                    c=0;
                    i=j-1;
                    flag=1;
                    break;
                }
                if(j==n-1)
                {
                    if(c>max)
                    {
                        max=c;
                    }
                    flag=1;
                    c=0;
                    break;
                }
            }
            if(c>max&&flag==0)
            {
                max=c;
                c=0;
                break;
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}
