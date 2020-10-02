#include <bits/stdc++.h> 
using namespace std;
#define lli long long
#define pdd pair<double, double> 
pdd lineLineIntersection(pdd A, pdd B, pdd C, pdd D) 
{ 
    double a1 = B.second - A.second; 
    double b1 = A.first - B.first; 
    double c1 = a1*(A.first) + b1*(A.second); 
    double a2 = D.second - C.second; 
    double b2 = C.first - D.first; 
    double c2 = a2*(C.first)+ b2*(C.second); 
    double determinant = a1*b2 - a2*b1; 
    double x = (b2*c1 - b1*c2)/determinant; 
    double y = (a1*c2 - a2*c1)/determinant; 
    return make_pair(x, y);
} 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,q,yc;
        cin>>n>>q;
        pdd a[n+1];
        for(lli i=1;i<=n;i++)
        {
            cin>>yc;
            a[i]=make_pair(i,yc);
        }
        lli x1,x2,y;
        for(lli i=0;i<q;i++)
        {
            lli c=0;
            cin>>x1>>x2>>y;
            pdd p1=make_pair(x1,y);
            pdd p2=make_pair(x2,y);
            for(lli j=1;j<n;j++)
            {
                if(j<x1)
                {
                    continue;
                }
                else
                {
                    pdd intersect=lineLineIntersection(a[j],a[j+1],p1,p2);
                    double x=intersect.first;
                    if((x==x2&&x==(j+1))||(x==x1&&x==j)||(x>x1&&x<x2))
                    {
                        if((x>=j&&x<=j+1))
                        c++;
                    }
                }
            }
            cout<<c<<"\n";
        }
    }
	  return 0;
}
