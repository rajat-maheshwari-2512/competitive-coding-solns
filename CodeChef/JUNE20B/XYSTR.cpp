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
        string s;
        cin>>s;
        lli ans=0;
        for(lli i=0;i<s.length()-1;i++)
        {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
            {
                ans++;
                i++;
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}
