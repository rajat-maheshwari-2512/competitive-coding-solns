#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	lli sum=0,t=0,n=0,temps=0,tempp=0;
	cin>>t;
	for(lli i=0;i<t;i++)
	{
	    lli score[11]={0};
	    sum=0;
	    cin>>n;
	    for(lli j=0;j<n;j++)
	    {
	        cin>>tempp>>temps;
	        if(score[tempp-1]<temps&&tempp>=1&&tempp<=8)
	        {
	            score[tempp-1]=temps;
	        }
	    }
	    for(lli j=0;j<11;j++)
	    {
	        sum+=score[j];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
