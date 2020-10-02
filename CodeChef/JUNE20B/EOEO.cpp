#include <bits/stdc++.h>
using namespace std;
#define lli long long
lli powertomakeodd(lli inp)
{ 
    lli n=inp;
    if(n%2!=0) 
    {
        return 1;
    }
    lli ans=1; 
    while(n%2==0) 
    { 
        n/=2; 
        ans*=2; 
    } 
    ans=ans*2;
    return (inp/ans); 
} 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli power;
        cin>>power;
        if(power%2==0)
        cout<<powertomakeodd(power)<<"\n";
        else if(power==1)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<power/2<<"\n";
        }
    }
	return 0;
}
