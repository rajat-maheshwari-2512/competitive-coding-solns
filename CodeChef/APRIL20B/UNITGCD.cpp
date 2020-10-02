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
        lli n,c=1;
        cin>>n;
        if(n>1)
        cout<<n/2<<"\n";
        if(n%2==0)
        {
            while(c<n)
            {
                cout<<2<<" "<<c<<" "<<(c+1);
                c++;
                cout<<"\n";
                c++;
            }
        }
        else if(n!=1)
        {
            cout<<3<<" 1"<<" 2"<<" 3\n";
            c=4;
            while(c<n)
            {
                cout<<2<<" "<<c<<" "<<(c+1);
                c++;
                cout<<"\n";
                c++;
            }
        }
        else
        {
            cout<<1<<"\n"<<1<<" 1"<<"\n";
        }
    }
	return 0;
}
