#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long a,n,k,sum=0;
        cin>>n>>k;
        for(long long j=0;j<n;j++)
        {
            cin>>a;
            sum+=(a%k);
        }
        cout<<sum%k<<endl;
    }
	return 0;
}
