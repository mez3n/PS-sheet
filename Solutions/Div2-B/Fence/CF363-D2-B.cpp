/* CF363-D2-B
30/07/2023   
17/32/51
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
void summing(vector<int> & in,vector<int> & out)
{
    out[1]=in[1];
    for(int i=2;i<in.size();i++)
    {
        out[i]=out[i-1]+in[i];
    }
}
int getsum(int l, int r ,vector<int>& price)
{
    return price[r]-price[l-1];
}
int main()
{
  int n;
  int k;
  cin>>n>>k;
  vector<int> arr1(n+1);
  for(int i =1;i<n+1;i++)
  {
   cin>>arr1[i];
  }
  vector<int> arr(n+1);
  summing(arr1,arr);
  int sum=0;
  int count=0;
  int min=INT_MAX;
  int out=0;
  for(int i=1;i<n-k+2;i++)
  {
      
      sum=getsum(i,i+k-1,arr);

         if(sum<min)
         {
            min=sum;
            out=i;
         }
      count=0;
      sum=0;
  }
  cout<<out;






   return 0;
}