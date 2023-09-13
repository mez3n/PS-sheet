/* CF463-D2-B
25/07/2023   
18/32/46
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  vector<long long> arr (n);
  for(long long i=0;i<n;i++)
  {
   cin>>arr[i];
  }
   long long sum =0;
   sum-=arr[0];

   for(long long i =0;i<n-1;i++)
   {  
      sum -=  -(arr[i]-arr[i+1]);
   }

   cout<<-sum;






   return 0;
}