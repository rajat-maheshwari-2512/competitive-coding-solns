#include <bits/stdc++.h>
using namespace std;
#define lli long long
bool findParity(lli x) 
{ 
    lli y=x^(x>>1); 
    y=y^(y>>2); 
    y=y^(y>>4); 
    y=y^(y>>8); 
    y=y^(y>>16); 
    if (y&1) 
        return 1; 
    return 0; 
} 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,q,p;
        cin>>n>>q;
        lli a[n],even=0,odd=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(!findParity(a[i]))
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        for(lli i=0;i<q;i++)
        {
            lli c=0;
            cin>>p;
            if(!findParity(p))
            {
                cout<<even<<" "<<odd<<"\n";
            }
            else
            {
                cout<<odd<<" "<<even<<"\n";
            }
        }
    }
	  return 0;
}
