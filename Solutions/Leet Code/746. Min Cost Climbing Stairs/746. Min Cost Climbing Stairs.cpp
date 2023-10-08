//
// Created by Mazen on 10/2/2023.
//
#include<bits/stdc++.h>
using namespace std;
int mem [1009];
int rec (vector<int>&arr,int i,int n)
{
    if(i>n)
    {
        return INT_MAX;
    }
    if(i==n)
    {
        return 0;
    }
    int& ret  = mem[i];
    if(ret!=-1)
    {
        return ret;
    }
    ret = arr[i]+min(rec(arr,i+1,n),rec(arr,i+2,n));
    return ret;
}
int minCostClimbingStairs(vector<int>& cost) {
    memset(mem,-1,sizeof mem);
    return min(rec(cost,0,cost.size()),rec(cost,1,cost.size()));
}
int main()
{
    int n;
    cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }







   return 0;
}