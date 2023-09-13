/* CF287-D2-B.cpp
17/07/2023   
17/05/26
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
long long sum(long long x)
{
    return x*(x+1)/2;
}
long long sum(long long x,long long y)
{
    if(y<=1)
    {
        return sum(x);
    }
    return sum(x)-sum(y-1);
}

int minsplitters(long long n , long long k)
{
    long long start=2; 
    long long end=k;
    while(start<end)
    {
        long long mid = (start+end)/2;
        long long s =sum(k,mid);
        if(s>n)
        {
            start=mid+1;
        }
        else if(s<n)
        {
            end=mid;
        }
        else if(s==n)
        {
            return k-mid+1;
        }
    }
     return k-end+2;

}
int main()
{
    
  long long count=0;
  long long n,k;
  cin>>n;
  cin>>k;
  if(n==1)
  {
    cout<<0;
  }
  else if(n<=k)
  {
    cout<<1;
  }
  else
  {
  n--;
  k--;


  if(sum(k)<n)
  {
    cout<<-1;
  }
  else
  {
     cout<<minsplitters(n,k);
  }
  }







   return 0;
}