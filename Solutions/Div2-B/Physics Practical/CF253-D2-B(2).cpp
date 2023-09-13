//
// Created by Mazen on 9/11/2023.
//
#include<bits/stdc++.h>
using namespace std;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int main()
{
TxtIO
  int n;
  cin>>n;
  int * arr=new int [n];
  for(int i=0;i<n;++i)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
  int ans = INT_MAX;
  for(int i =0;i<n;++i)
  {
     int x= upper_bound(arr,arr+n,2*arr[i])-arr;
      ans=min(ans,i+n-x);
  }
  cout<<ans<<endl;









   return 0;
}