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
        lli n;
        cin>>n;
        map<lli,lli> x;
        map<lli,lli> y;
        lli tempx,tempy,ansx,ansy;
        for(lli i=0;i<4*n-1;i++)
        {
            cin>>tempx>>tempy;
            x[tempx]++;
            y[tempy]++;
        }
        for(auto i:x)
        {
            if(i.second%2==1)
            {
                ansx=i.first;
                break;
            }
        }
        for(auto i:y)
        {
            if(i.second%2==1)
            {
                ansy=i.first;
                break;
            }
        }
        cout<<ansx<<" "<<ansy<<"\n";
    }
	return 0;
}
