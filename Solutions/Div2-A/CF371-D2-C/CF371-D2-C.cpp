/* CF371-D2-C.cpp
18/07/2023   
17/50/01
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
long long max1 (long long x, long long y)
{
    if(x>y)
    {
        return x;
    }
    return y;
}
long long calc (long long n,long long pb,long long ps,long long pc,long long nb,long long ns,long long nc,long long rc,long long rb,long long rs)
{
    long long money=0;
    money+= max1 (0,(((n*rb)-nb)*pb));
    money+= max1 (0,(((n*rc)-nc)*pc));
    money+= max1 (0,(((n*rs)-ns)*ps));
    return money;
}

int main()
{
  string s;
  cin>>s;
  long long rb=0,rs=0,rc=0;
  for(long long i=0;i<s.length();i++)
  {
    if(s[i]=='B')
    {
        rb++;
    }
    if(s[i]=='S')
    {
        rs++;
    }
    if(s[i]=='C')
    {
        rc++;
    }
  }
  long long nb,nc,ns;
  cin>>nb>>ns>>nc;
  long long pb,ps,pc;
  cin>>pb>>ps>>pc;
  long long money;
  cin>>money;
  long long start =0;
  long long end=10e14;
  long long mid;
  long long ans ;
  while(start<=end)
  {
    mid=start+(-start+end)/2;
    long long sum = calc ( mid, pb,ps, pc,nb, ns, nc, rc ,rb, rs);
    if(sum>money)
    {
        end=mid-1;
    }
    else
    {
        ans= mid;
        start=mid+1;
    }
  }

  cout<<ans;

  






   return 0;
}