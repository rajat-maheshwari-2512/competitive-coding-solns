#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,max=0,c=0,flag=0;
        cin>>n>>k;
        int a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            flag=0;
            for(long long j=i;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    //cout<<i<<" "<<j<<endl;
                }
                else
                {
                    if(c>max)
                    {
                        max=c;
                    }
                    c=0;
                    i=j-1;
                    flag=1;
                    break;
                }
                if(j==n-1)
                {
                    if(c>max)
                    {
                        max=c;
                    }
                    flag=1;
                    c=0;
                    break;
                }
            }
            if(c>max&&flag==0)
            {
                max=c;
                c=0;
                break;
            }
        }
        cout<<max<<endl;
    }
	return 0;
}
