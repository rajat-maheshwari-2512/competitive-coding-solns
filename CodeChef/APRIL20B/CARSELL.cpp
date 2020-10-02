#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000007
int main() 
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n,p,profit=0,c=0;
	    priority_queue<lli> price;
	    cin>>n;
	    for(lli i=0;i<n;i++)
	    {
	        cin>>p;
	        price.push(p);
	    }
	    while(price.size()!=0)
	    {
	        if((price.top()-c)>0)
	        {
	            profit+=price.top()-c;
	        }
	        else
	        {
	            profit+=0;
	        }
	        profit=profit%mod;
	        c++;
	        price.pop();
	    }
	    cout<<profit<<"\n";
	}
	return 0;
}
