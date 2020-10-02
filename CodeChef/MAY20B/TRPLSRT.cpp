#include <bits/stdc++.h>
using namespace std;
#define lli long long
void solve()
{
    lli n,k,p1=-1,p2=-1,p3=-1,pair1,pair2,temp1,temp2,c=0,flag=0;
    cin>>n>>k;
    lli a[n]={0};
    vector<lli> ans;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lli i=0;
    while(i<n)
    {
        if(a[i]==i+1)
        {
            i++;
            continue;
        }
        p1=i;
        p2=(a[i]-1);
        p3=(a[a[i]-1]-1);
        if(p1==p3)
        {
            if(flag==0)
            {
                pair1=p1;
                pair2=p2;
                flag=1;
                i++;
                continue;
            }
            else
            {
                if(p1==pair1||p1==pair2)
                {
                    i++;
                    continue;
                }
                p3=pair1;
                ans.push_back(p1+1);
                ans.push_back(p2+1);
                ans.push_back(p3+1);
                temp1=a[p1];
                a[p1]=a[p3];
                temp2=a[p2];
                a[p2]=temp1;
                a[p3]=temp2;
                p2=pair2;
                ans.push_back(p1+1);
                ans.push_back(p2+1);
                ans.push_back(p3+1);
                temp1=a[p1];
                a[p1]=a[p3];
                temp2=a[p2];
                a[p2]=temp1;
                a[p3]=temp2;
                flag=0;
                if(ans.size()/3>k)
                {
                    cout<<"-1\n";
                    return;
                }
                continue;
            }
        }
        ans.push_back(p1+1);
        ans.push_back(p2+1);
        ans.push_back(p3+1);
        //c++;
        temp1=a[p1];
        a[p1]=a[p3];
        temp2=a[p2];
        a[p2]=temp1;
        a[p3]=temp2;
    }
    if(flag==1||ans.size()/3>k)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<ans.size()/3<<"\n";
        for(lli i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
            if((i+1)%3==0)
            {
                cout<<"\n";
            }
        }
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
