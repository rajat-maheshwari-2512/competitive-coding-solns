#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        priority_queue<long long> a;
        priority_queue<long long> b;
        long long sum=0,x;
        for(long long j=0;j<n;j++)
        {
            cin>>x;
            a.push(x);
        }
        for(long long j=0;j<n;j++)
        {
            cin>>x;
            b.push(x);
        }
        for(int j=0;j<n;j++)
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
        cout<<sum<<endl;
    }
	return 0;
}
