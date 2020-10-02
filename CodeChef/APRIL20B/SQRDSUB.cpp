#include <bits/stdc++.h>
using namespace std;
#define lli long long
lli arr[1000004];
lli input(lli n)
{
    lli inp;
    for(lli i=0;i<n;i++)
    {
        cin>>inp;
        if(inp&1)
        {
            arr[i]=0;
        }
        else if(!(inp&1)&&inp%4!=0)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=2;
        }
    }
}
lli solve(lli n)
{
    map<lli,lli> a;
    lli ans=0,sum=0;
    for(lli i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==1)
        {
            ans=ans+1;
        }
        if(a.find(sum-1)!=a.end())
        {
            ans=ans+a[sum-1];
        }
        a[sum]++;
    }
    return ans;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        input(n);
        lli total=n*(n+1)/2;
        cout<<total-solve(n)<<"\n";
    }
	return 0;
}
