//
// Created by Mazen on 8/28/2023.
//
#include<bits/stdc++.h>
long long n,m,x,y;
using namespace std;
bool valid(long long kapran,long long james)
{
    return kapran<=n && kapran>0 && james<=m && james>0;
}
int main()
{ long long count=0;
  cin>>n>>m>>x>>y;
  long long k;
  cin>>k;
  vector<pair<int,int>> arr(k);
  for(int i =0;i<k;i++)
  {
      cin>>arr[i].first>>arr[i].second;
  }

  for(int i=0;i<k;i++)
  {long long mid;  long long start=0,end=10e9;
      long long step =0;
  while(start!=end)
  {
      mid =start+(end-start+1)/2;
      if(valid(x+arr[i].first*mid,y+arr[i].second*mid))
      {
          step=mid;
          start=mid;
      }
      else
      {
          end=mid-1;
      }

  }
  x+=arr[i].first*step;
  y+=arr[i].second*step;
  count+=step;
  }
  cout<<count;






   return 0;
}