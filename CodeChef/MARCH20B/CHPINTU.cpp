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
        lli n,m;
        cin>>n>>m;
        lli sum[m]={0};
        lli f[n]={0},p,check[m]={0};
        for(lli i=0;i<n;i++)
        {
            cin>>f[i];
            f[i]--;
            check[f[i]]++;
        }
        for(lli i=0;i<n;i++)
        {
            cin>>p;
            sum[f[i]]=sum[f[i]]+p;
        }
        lli min=1e9;
        for(lli i=0;i<m;i++)
        {
            if(sum[i]<min&&check[i]!=0)
            {
                min=sum[i];
            }
        }
        cout<<min<<"\n";
    }
	  return 0;
}
