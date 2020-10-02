#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
    lli n;
    cin>>n;
    lli low=1,high=n,mid;
    char ch1='a',ch2='a',ch3='a',ch4='a';
    char truth='E';
    mid=low+(high-low)/2;
    while(ch1==ch3&&ch2==ch4)
    {
        cout<<mid<<"\n";
        cin>>ch1;
        cout<<mid<<"\n";
        cin>>ch2;
        cout<<mid<<"\n";
        cin>>ch3;
        cout<<mid<<"\n";
        cin>>ch4;
        if(ch1!=ch3)
        {
            truth='E';
            if(ch2=='G')
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            break;
        }
        else if(ch2!=ch4)
        {
            truth='O';
            if(ch1=='G')
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            break;
        }
    }
    if(truth=='E')
    {
        while(ch2!='E')
        {
            mid=low+(high-low)/2;
            cout<<mid<<"\n";
            cin>>ch1;
            if(ch1=='E')
                break;
            cout<<mid<<"\n";
            cin>>ch2;
            if(ch2=='G')
            {
                low=mid+1;
            }
            else if(ch2=='L')
            {
                high=mid-1;
            }
            else if(ch2=='E')
            {
                break;
            }
        }
    }
    else
    {
        while(true)
        {
            mid=low+(high-low)/2;
            cout<<mid<<"\n";
            cin>>ch1;
            if(ch1=='E')
                break;
            cout<<mid<<"\n";
            cin>>ch2;
            if(ch2=='E')
                break;
            if(ch1=='G')
            {
                low=mid+1;
            }
            else if(ch1=='L')
            {
                high=mid-1;
            }
            else if(ch1=='E')
            {
                break;
            }
        }
    }
	return 0;
}
