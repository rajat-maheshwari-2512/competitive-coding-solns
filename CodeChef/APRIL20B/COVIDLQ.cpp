#include <bits/stdc++.h>
using namespace std;
#define lli unsigned long long
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,test=0;
        cin>>n;
        lli num[n];
        vector<lli> pos;
        for(lli i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]==1)
            {
                pos.push_back(i);
            }
        }
        for(lli i=0;i<pos.size()-1;i++)
        {
            if(pos[i+1]-pos[i]<6)
            {
                cout<<"NO\n";
                test=1;
                break;
            }
        }
        if(test==0)
        {
            cout<<"YES\n";
        }
    }
	return 0;
}
