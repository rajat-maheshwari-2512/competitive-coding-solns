#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int s,w1,w2,w3;
	    cin>>s>>w1>>w2>>w3;
	    if(s>=w1+w2+w3)
	    {
	        cout<<"1\n";
	    }
	    else if(s>=w1+w2||s>=w2+w3)
	    {
	        cout<<"2\n";
	    }
	    else
	    cout<<"3\n";
	}
	return 0;
}
