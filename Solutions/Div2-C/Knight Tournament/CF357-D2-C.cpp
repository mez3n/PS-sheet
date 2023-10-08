//
// Created by Mazen on 10/5/2023.
//
#include<bits/stdc++.h>
using namespace std;
struct fight{
    int l,r,winner;
};
int main()
{
    int m,n;
    cin>>n>>m;
    vector<fight> arr(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr[i].l>>arr[i].r>>arr[i].winner;
    }
    set<int> knights ;
    vector<int> out(n+1,0);
    for(int i =1;i<n+1;i++)
    {
       knights.insert(i);
    }



    for(int i=0;i<m;i++)
    {
      auto itr = knights.lower_bound(arr[i].l);
      while(*itr<=arr[i].r&&itr!=knights.end())
      {
          if(*itr!=arr[i].winner)
          {
              out[*itr]=arr[i].winner;
              int del = *itr;
              itr++;
              knights.erase(del);
          }else {
              itr++;
          }
      }
    }

    for(int i =1;i<n+1;i++)
    {
        cout<<out[i]<<" ";
    }








   return 0;
}