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
        lli c1=1;
        for(lli i=0;i<8;i++)
        {
            for(lli j=0;j<8;j++)
            {
                if(i==0&&j==0)
                {
                    cout<<"O";
                    continue;
                }
                if(c1<n)
                {
                    cout<<".";
                    c1++;
                }
                else
                {
                    cout<<"X";
                }
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
	return 0;
}
