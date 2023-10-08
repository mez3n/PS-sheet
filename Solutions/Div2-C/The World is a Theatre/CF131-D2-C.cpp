//
// Created by Mazen on 9/30/2023.
//
#include<bits/stdc++.h>

using namespace std;

int t = 0;
long long combi(long long n,long long k)
{
    if(k>n)
    {
        return 0;
    }
    long long ans=1;
    k=k>n-k?n-k:k;
    long long j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

int main() {
    long long b, g;
    cin >> b >> g >> t;
    long long cnt=0;
   for(long long i =1;i<=t-4;i++)
   {
       cnt+= combi(g,i)* combi(b,t-i);
   }
   cout<<cnt;


    return 0;
}
