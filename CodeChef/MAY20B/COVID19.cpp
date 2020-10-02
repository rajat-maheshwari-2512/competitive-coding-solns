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
        lli n,c=1;
        cin>>n;
        lli a[n];
        vector<lli>diffe;
        vector<lli>out;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                diffe.push_back(a[i]-a[i-1]);
            }
        }
        for(lli i=0;i<diffe.size();i++)
        {
            if(diffe[i]<=2)
            {
                c++;
            }
            else
            {
                out.push_back(c);
                c=1;
            }
        }
        out.push_back(c);
        lli a1=0,a2=999999999;
        for(lli i=0;i<out.size();i++)
        {
           if(out[i]>a1)
            {
                a1=out[i];
            }
            if(out[i]<a2)
            {
                a2=out[i];
            }
        }
        cout<<a2<<" "<<a1<<"\n";
    }
	return 0;
}
