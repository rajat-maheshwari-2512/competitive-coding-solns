#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int flag=0,count=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	        if(j-5<=0)
	        {
	            flag=0;
	            for(int k=0;k<j;k++)
	            {
	                if(a[k]<=a[j])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	            count++;
	        }
	        else
	        {
	            flag=0;
	            for(int k=j-5;k<j;k++)
	            {
	                if(a[k]<=a[j])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag==0)
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
