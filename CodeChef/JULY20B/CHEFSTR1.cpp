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
        lli n;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli sum=0;
        for(lli i=1;i<n;i++)
        {
            sum+=abs(a[i]-a[i-1])-1;
        }
        cout<<sum<<"\n";
    }
	return 0;
}
