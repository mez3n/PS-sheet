/* CF66-D2-B.cpp
20/07/2023   
18/39/57
--------------------------------------------- */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> arr (n);
  vector<int> count (n) ;
  for(int i =0;i<n;i++)
  {
   cin>>arr[i];
  }


  for(int i =0;i<n;i++)
  {
   count[i]=1;
   int j=i;
   while(j+1<n && arr[j]>=arr[j+1] )
   {
      j++;
      count[i]++;
     
   }
   j=i;
   while(j-1>-1 && arr[j]>=arr[j-1])
   {
      j--;
      count[i]++;
      
   }
   
  }
  
  

int max=count[0];
  for(int i=1;i<n;i++)
  {
   if(count[i]>max)
   {
      max=count[i];
   }
  }
    cout<<max;




   return 0;
}