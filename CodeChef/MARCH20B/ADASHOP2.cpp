#include <bits/stdc++.h>
using namespace std;
#define lli long long
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        lli r,c;
        cin>>r>>c;
        if(r==1&&c==1)
        {
            cout<<"37\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r==c)
        {
            cout<<"38\n";
            cout<<"1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==4)
        {
            cout<<"39\n";
            cout<<"2 2\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==6)
        {
            cout<<"39\n";
            cout<<"3 3\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==8)
        {
            cout<<"39\n";
            cout<<"4 4\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==10)
        {
            cout<<"39\n";
            cout<<"5 5\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==12)
        {
            cout<<"39\n";
            cout<<"6 6\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        else if(r+c==14)
        {
            cout<<"39\n";
            cout<<"7 7\n1 1\n";
            cout<<"2 2\n3 1\n4 2\n5 1\n6 2\n7 1\n8 2\n7 3\n8 4\n7 5\n8 6\n7 7\n8 8\n7 7\n6 8\n5 7\n4 8\n3 7\n2 8\n1 7\n2 6\n1 5\n2 4\n1 3\n2 2\n3 3\n4 2\n5 3\n6 2\n7 3\n6 4\n7 5\n6 6\n5 5\n4 6\n3 5\n4 4";
        }
        cout<<"\n";
    }
	  return 0;
}
