#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
	lli t;
	cin>>t;
	for(lli i=0;i<t;i++)
    {
        lli n,min=100000,num;
        cin>>n;
        for(lli j=0;j<n;j++)
        {
            cin>>num;
            if(num<min)
            {
                min=num;
            }
        }
        cout<<min<<"\n";
    }
	return 0;
}
