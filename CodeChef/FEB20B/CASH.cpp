#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	lli t;
    	cin>>t;
    	for(lli i=0;i<t;i++)
    	{
        	lli a,n,k,sum=0;
        	cin>>n>>k;
        	for(lli j=0;j<n;j++)
        	{
            	cin>>a;
            	sum+=(a%k);
        	}
        	cout<<sum%k<<endl;
    	}
	return 0;
}
