#include <bits/stdc++.h>
using namespace std;
#define lli long long
lli sod(lli num)
{
    lli sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
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
        lli a,b,sum1=0,sum2=0;
        lli c1=0,c2=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a>>b;
            sum1=sod(a);
            sum2=sod(b);
            if(sum1>sum2)
            {
                c1++;
            }
            else if(sum1<sum2)
            {
                c2++;
            }
            else
            {
                c1++;
                c2++;
            }
        }
        if(c1>c2)
        {
            cout<<"0 "<<c1<<"\n";
        }
        else if(c2>c1)
        {
            cout<<"1 "<<c2<<"\n";
        }
        else
        {
            cout<<"2 "<<c1<<"\n";
        }
    }
	return 0;
}
