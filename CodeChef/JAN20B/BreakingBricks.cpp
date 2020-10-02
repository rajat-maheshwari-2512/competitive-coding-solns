#include <bits/stdc++.h>
using namespace std;
#define lli long long
lli main() 
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	lli t;
	cin>>t;
	for(lli i=0;i<t;i++)
	{
	    lli s,w1,w2,w3;
	    cin>>s>>w1>>w2>>w3;
	    if(s>=w1+w2+w3)
	    {
	        cout<<"1\n";
	    }
	    else if(s>=w1+w2||s>=w2+w3)
	    {
	        cout<<"2\n";
	    }
	    else
	    cout<<"3\n";
	}
	return 0;
}
