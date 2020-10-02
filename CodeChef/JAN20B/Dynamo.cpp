#include <bits/stdc++.h>
using namespace std;
#define lli unsigned long long
int main() 
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	lli a,b,d,flag,t,n,s;
	cin>>t;
	for(lli i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>a;
	    lli maxi=pow(10,n);
	    s=a+2*maxi;
	    cout<<s<<endl;
	    cin>>b;
	    cout<<(s-a-b-maxi)<<endl;
	    cin>>d;
	    cout<<(maxi-d)<<endl;
	    cin>>flag;
	}
	return 0;
}
