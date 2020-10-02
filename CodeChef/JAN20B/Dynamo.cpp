#include <bits/stdc++.h>
using namespace std;
int main() 
{
	unsigned long long a,b,d,flag,t,n,s;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>a;
	    unsigned long long maxi=pow(10,n);
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
