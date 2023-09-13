/* CF165-D2-B.cpp
18/07/2023   
17/12/08
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
long long getsum(long long n,long long k)
{
   long long i =1;
   long long sum=0;
   while((n/i)>0)
   {
      sum+=(n/i);
      i*=k;
   }
   return sum;
   
}
int main()
{
   long long n,k;
   cin>>n>>k;


   if(n==1)
   {
      cout<<1;
      
   }
   else{

      long long start=1;
      long long end=n*k;
      long long mid;
   while(start<end)
   {
      mid=(start+end)/2;
      long long sum = getsum(mid,k);
      if(sum<n)
      {
         start=mid+1;
         mid=(start+end)/2;
      }
      else
      {
        end=mid; 
      }
   }
    cout<<mid;
   }
     







   return 0;
}