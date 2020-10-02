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
        lli a[100000]={0};
        lli b[n]={0},flag=1;
        for(lli i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(lli i=0;i<n;i++)
        {
            if(b[i]==5)
            {
                a[5]++;
            }
            else if(b[i]==10)
            {
                if(a[5]==0)
                {
                    flag=0;
                    break;
                }
                a[10]++;
                a[5]--;
            }
            else
            {
                if(a[10]==0&&a[5]<2)
                {
                    flag=0;
                    break;
                }
                else if(a[10]!=0)
                {
                    a[10]--;
                    a[15]++;
                }
                else if(a[5]>=2)
                {
                    a[5]=a[5]-2;
                    a[15]++;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
	return 0;
}
