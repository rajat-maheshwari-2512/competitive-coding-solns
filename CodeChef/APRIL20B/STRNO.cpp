#include <bits/stdc++.h>
using namespace std;
#define lli long long
int kFactors(lli n, lli k) 
{ 
    vector<lli> P; 
    while (n%2 == 0) 
    { 
        P.push_back(2); 
        n /= 2; 
    } 
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
    if (n > 2) 
        P.push_back(n); 
    if (P.size() < k) 
    { 
        //cout << "-1" << endl; 
        return 0; 
    } 
    return 1;
} 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli x,k;
        cin>>x>>k;
        cout<<kFactors(x,k)<<"\n";
    }
	return 0;
}
