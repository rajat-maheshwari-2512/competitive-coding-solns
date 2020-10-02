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
        lli n,k;
        cin>>n>>k;
        lli a;
        lli sum=0,sumr=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
            if(a>k)
            {
                sumr+=k;
            }
            else
            {
                sumr+=a;
            }
        }
        cout<<sum-sumr<<"\n";
    }
	return 0;
}
