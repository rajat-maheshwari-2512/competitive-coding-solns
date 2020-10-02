#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,sumt=0;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long n,x,sum=0;
        char ch;
        cin>>n;
        long long freq[4][4]={0};
        for(long long j=0;j<n;j++)
        {
            cin>>ch>>x;
            if(x==12)
            {
                switch(ch)
                {
                    case 'A':
                            freq[0][0]++;
                            break;
                    case 'B':
                            freq[1][0]++;
                            break;
                    case 'C':
                            freq[2][0]++;
                            break;
                    case 'D':
                            freq[3][0]++;
                            break;
                }
            }
            if(x==3)
            {
                switch(ch)
                {
                    case 'A':
                            freq[0][1]++;
                            break;
                    case 'B':
                            freq[1][1]++;
                            break;
                    case 'C':
                            freq[2][1]++;
                            break;
                    case 'D':
                            freq[3][1]++;
                            break;
                }
            }
            if(x==6)
            {
                switch(ch)
                {
                    case 'A':
                            freq[0][2]++;
                            break;
                    case 'B':
                            freq[1][2]++;
                            break;
                    case 'C':
                            freq[2][2]++;
                            break;
                    case 'D':
                            freq[3][2]++;
                            break;
                }
            }
            if(x==9)
            {
                switch(ch)
                {
                    case 'A':
                            freq[0][3]++;
                            break;
                    case 'B':
                            freq[1][3]++;
                            break;
                    case 'C':
                            freq[2][3]++;
                            break;
                    case 'D':
                            freq[3][3]++;
                            break;
                }
            }
        }
        //cout<<freq[1][0];
        long long max[4]={0};
        long long pos;
        for(long long j=0;j<4;j++)
        {
            if(freq[j][0]>=max[0])
            {
                max[0]=freq[j][0];
                pos=j;
            }
        }
        //cout<<max[0];
        for(long long j=0;j<4;j++)
        {
            if(freq[pos][j]>max[0])
            {
                long long t=max[0];
                max[0]=freq[pos][j];
                freq[pos][j]=t;
            }
        }
        freq[pos][0]=0;
        freq[pos][1]=0;
        freq[pos][2]=0;
        freq[pos][3]=0;
        for(long long j=0;j<4;j++)
        {
            if(freq[j][1]>=max[1])
            {
                max[1]=freq[j][1];
                pos=j;
            }
        }
        for(long long j=0;j<4;j++)
        {
            if(freq[pos][j]>max[1])
            {
                long long t=max[1];
                max[1]=freq[pos][j];
                freq[pos][j]=t;
            }
        }
        freq[pos][0]=0;
        freq[pos][1]=0;
        freq[pos][2]=0;
        freq[pos][3]=0;
        for(long long j=0;j<4;j++)
        {
            if(freq[j][2]>=max[2])
            {
                max[2]=freq[j][2];
                pos=j;
            }
        }
        for(long long j=0;j<4;j++)
        {
            if(freq[pos][j]>max[2])
            {
                long long t=max[2];
                max[2]=freq[pos][j];
                freq[pos][j]=t;
            }
        }
        freq[pos][0]=0;
        freq[pos][1]=0;
        freq[pos][2]=0;
        freq[pos][3]=0;
        for(long long j=0;j<4;j++)
        {
            if(freq[j][3]>=max[3])
            {
                max[3]=freq[j][3];
                pos=j;
            }
        }
        for(long long j=0;j<4;j++)
        {
            if(freq[pos][j]>max[3])
            {
                long long t=max[3];
                max[3]=freq[pos][j];
                freq[pos][j]=t;
            }
        }
        freq[pos][0]=0;
        freq[pos][1]=0;
        freq[pos][2]=0;
        freq[pos][3]=0;
        sort(max,max+4);
        //cout<<max[0]<<max[1]<<max[2]<<max[3];
        if(max[0]!=0)
        {
            sum+=25*max[0];
        }
        else
        {
            sum-=100;
        }
        if(max[1]!=0)
        {
            sum+=50*max[1];
        }
        else
        {
            sum-=100;
        }
        if(max[2]!=0)
        {
            sum+=75*max[2];
        }
        else
        {
            sum-=100;
        }
        if(max[3]!=0)
        {
            sum+=100*max[3];
        }
        else
        {
            sum-=100;
        }
        cout<<sum<<endl;
        sumt+=sum;
    }
    cout<<sumt;
    return 0;
}
