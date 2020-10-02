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
        lli n,x;
        cin>>n>>x;
        lli a[n],ans=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        lli k=0;
        for(lli i=0;i<n;i++)
        {
            if(a[i]>=x)
            {
                k=i;
                //cout<<k<<"\n";
                break;
            }
        }
        for(lli i=k;i<n;i++)
        {
            if(x<a[i])
            {
                double temp1=log2(double(a[i])/x);
                lli temp=ceil(temp1);
                //cout<<temp<<"\n";
                ans+=temp+1;
                x=a[i]*2;
            }
            else
            {
                ans+=1;
                x=a[i]*2;
            }
        }
        ans+=k;
        cout<<ans<<"\n";
    }
	return 0;
}
