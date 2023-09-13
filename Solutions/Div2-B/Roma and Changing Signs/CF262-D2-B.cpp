//
// Created by Mazen on 9/6/2023.
//
#include<bits/stdc++.h>
using namespace std;
bool abs_sort(int x,int y)
{
    return abs(x)>abs(y);
}
int main()
{
 int n ,k;
 cin>>n>>k;

 vector<int> arr(n);
 for(int i =0;i<n;i++)
 {
     cin>>arr[i];
 }
 sort(arr.begin(),arr.end(), abs_sort);



      for(int i=0;i<n;i++)
      {
          if(arr[i]<0)
          {
              arr[i]=-arr[i];
              k--;
          }
          if(k<=0)
          {
              break;
          }
      }
      if(k%2!=0)
      {
          arr[n-1]=-arr[n-1];
      }

  int sum=0;
  for(int i =0;i<n;i++)
  {
      sum+=arr[i];
  }

  cout<<sum;








   return 0;
}
