/* CF463-D2-B
25/07/2023   
18/32/46
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> arr (n);
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }

   int sum =0;

   sum+=arr[0];
   int money =sum;
   sum =0;

   for(int i =0;  i<n-1   ;i++)
   {  
      if(arr[i+1]-arr[i]>sum)
      {
         money +=arr[i+1]-arr[i]-sum;
         sum=0;
      }
      else
      {
         sum-=arr[i+1]-arr[i];
      }
   }

   cout<<money;






   return 0;
}