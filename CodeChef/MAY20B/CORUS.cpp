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
        lli n,q,cou=0,qu;
        cin>>n>>q;
        string inp;
        cin>>inp;
        lli freq[26]={0};
        for(lli i=0;i<inp.length();i++)
        {
            freq[inp[i]-97]++;
        }
        for(lli i=0;i<q;i++)
        {
            cin>>qu;
            cou=0;
            for(lli j=0;j<26;j++)
            {
                if(freq[j]-qu>0)
                {
                    cou+=freq[j]-qu;
                }
            }
            cout<<cou<<"\n";
        }
    }
	return 0;
}
