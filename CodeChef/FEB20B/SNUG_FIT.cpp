#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    for(lli i=0;i<t;i++)
    {
        lli n;
        cin>>n;
        priority_queue<lli> a;
        priority_queue<lli> b;
        lli sum=0,x;
        for(lli j=0;j<n;j++)
        {
            cin>>x;
            a.push(x);
        }
        for(lli j=0;j<n;j++)
        {
            cin>>x;
            b.push(x);
        }
        for(lli j=0;j<n;j++)
        {
            if(a.top()>=b.top())
            {
                sum=sum+b.top();
                a.pop();
                b.pop();
            }
            else
            {
                sum=sum+a.top();
                a.pop();
                b.pop();
            }
        }
        cout<<sum<<"\n";
    }
	return 0;
}
