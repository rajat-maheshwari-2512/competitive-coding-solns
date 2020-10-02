import os
import numpy as num
import collections
t=int(input()) 
for i in num.arange(0,t):
    ans=[]
    flag=1
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    afreq=collections.Counter(a)
    bfreq=collections.Counter(b)
    miniswap=min(min(a),min(b))
    for first,second in afreq.items():
        if (afreq[first]+bfreq[first])%2==1:
            flag=0
            break
    for first,second in bfreq.items():
        if (afreq[first]+bfreq[first])%2==1:
            flag=0
            break
    if flag==0:
        print(-1)
    else:
        for first,second in afreq.items():
            if afreq[first]!=bfreq[first]:
                for temp in num.arange(0,abs(afreq[first]-bfreq[first])//2):
                    if first>2*miniswap:
                        ans.append(2*miniswap)
                    else:
                        ans.append(first)
        for first,second in bfreq.items():
            if afreq[first]!=bfreq[first] and first not in afreq:
                for temp in num.arange(0,abs(afreq[first]-bfreq[first])//2):
                    if first>2*miniswap:
                        ans.append(2*miniswap)
                    else:
                        ans.append(first)
        ans.sort()
        anss=sum(ans[0:len(ans)//2])
        print(anss)
#Test Cases used
#3
#1
#1
#2
#2
#1 2
#2 1
#2
#1 1
#2 2
#1
#11
#1 1 2 3 3 3 4 4 4 4 5
#1 1 2 2 2 3 5 5 5 5 5
#First Python Code Yeet
