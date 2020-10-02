#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
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
        mp::cpp_int x,y,ll,rl,ans=0,max=0,pos;
        cin>>x>>y>>ll>>rl;
        if(x!=0&&y!=0)
        {
            ans=x|y;
            if(ans>rl)
            {
                max=0;
                pos=ll;
                for(mp::cpp_int i=ll;i<=rl;i++)
                {
                    ans=(x&i)*(y&i);
                    if(ans>max)
                    {
                        max=ans;
                        pos=i;
                    }
                }
                cout<<pos<<"\n";
            }
            else
            {
                cout<<ans<<"\n";
            }
        }
        else
        {
            cout<<ll<<"\n";
        }
    }
	return 0;
}
