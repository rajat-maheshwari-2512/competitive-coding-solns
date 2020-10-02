//0.731/1 points
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
        lli n,m,k,inp;
        cin>>n>>m>>k;
        for(lli i=0;i<n;i++)
        {
            lli freq[10]={0};
            lli max=0,pos=0;
            for(lli j=0;j<k;j++)
            {
                cin>>inp;
                freq[inp]++;
            }
            for(lli j=1;j<10;j++)
            {
                if(freq[j]>=max)
                {
                    max=freq[j];
                    pos=j;
                }
            }
            cout<<pos<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
