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
        lli n,c=1,od=0;
        cin>>n;
        lli a[n][n];
        for(lli i=1;i<=n;i++)
        {
            od=0;
            for(lli j=1;j<=n;j++)
            {
                if(i%2!=0)
                {
                    cout<<c<<" ";
                    c++;
                }
                else
                {
                    cout<<n*i-od<<" ";
                    c++;
                    od++;
                }
            }
            cout<<"\n";
        }
    }
	return 0;
}
