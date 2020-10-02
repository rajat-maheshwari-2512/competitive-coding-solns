#include <bits/stdc++.h>
using namespace std;
#define lli long long
lli solve(lli arr[], lli n) 
{ 
	pair<lli,lli> valposi[n];
	for (lli i=0;i<n;i++) 
	{ 
		valposi[i].first = arr[i]; 
		valposi[i].second = i; 
	} 
	sort(valposi, valposi + n); 
	vector<bool> boo(n, false); 
	lli ans = 0; 
	for (lli i = 0; i < n; i++) 
	{ 
		if (boo[i] || valposi[i].second == i) 
		{
			continue;
		}
		lli cycsize = 0; 
		lli j = i; 
		while (!boo[j]) 
		{ 
			boo[j] = true;
			j = valposi[j].second; 
			cycsize++; 
		} 
		if (cycsize > 0) 
		{ 
			ans+=(cycsize-1); 
		} 
	} 
	return ans; 
} 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli nn,mp;
        cin>>nn>>mp;
        lli inpval[nn],pairson[mp][2];
        for(lli i=0;i<nn;i++)
        {
            cin>>inpval[i];
        }
        for(lli i=0;i<mp;i++)
        {
            cin>>pairson[i][0]>>pairson[i][1];
        }
        cout<<solve(inpval,nn)<<"\n";
    }
	return 0;
}
