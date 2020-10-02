#include <bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
	  lli t,s;
	  cin>>t>>s;
	  while(t--)
	  {
		  lli n;
		  cin>>n;
		  vector<lli> a(n),b(n);
		  for(lli i=0;i<n;i++)
		  {
		      cin>>a[i];
		  }
		  for(lli i=0;i<n;i++)
		  {
		      cin>>b[i];
		  }
		  sort(a.begin(),a.end());
		  sort(b.begin(),b.end());
		  vector<lli> played;
		  vector<lli>::iterator it;
		  if(b[0]<=a[0])
		  {
			  cout<<"NO\n";
		  }
		  else
		  {
			  played.push_back(a[0]);
			  played.push_back(b[0]);
			  for(lli i=1;i<n;i++)
			  {
				    it=find(played.begin(),played.end(),a[i]);
				    if(it!=played.end()&&a[i]<b[i])
				    {
					      played.push_back(a[i]);
					      played.push_back(b[i]);
				    }
				    else
				    {
					      break;
				    }
			   }
			  if(played.size()==(2*n))
			  {
				    cout<<"YES\n";
			  }
			  else
			  {
				    cout<<"NO\n";
			  }
		 }
	}
	return 0;
}
