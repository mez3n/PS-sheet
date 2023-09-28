/* CF1237-D12-A.cpp
15/07/2023   
14/03/07
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int * arr=new int [n];
  int * modifications=new int [n];
  int sum=0;
   int index =0;
   for(int i =0;i<n;i++)
   {
      cin>>arr[i];
      if(arr[i]%2!=0)
      {
         modifications[index++]=i;
      }
      arr[i]/=2;
      sum+=arr[i];
   }
   index=0;
   while(sum>0)
   {  
      if()
      arr[modifications[index++]]--;
      sum--;
   }
   while(sum<0)
   {
      arr[modifications[index++]]++;
      sum++;
   }
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<endl;
      
   }



   





   return 0;
}