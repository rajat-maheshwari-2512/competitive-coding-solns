#include <iostream>
using namespace std;

int main() 
{
	int sum,t,n,temps,tempp;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int score[11]={0};
	    sum=0;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>tempp>>temps;
	        if(score[tempp-1]<temps&&tempp>=1&&tempp<=8)
	        {
	            score[tempp-1]=temps;
	        }
	    }
	    for(int j=0;j<11;j++)
	    {
	        sum+=score[j];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
