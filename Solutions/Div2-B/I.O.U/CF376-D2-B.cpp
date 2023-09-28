//
// Created by Mazen on 9/8/2023.
//
#include<bits/stdc++.h>
using namespace std;
struct line {
    int first;
    int second;
    int debt;
};
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> per(n+1,0);
  for(int i =0;i<m;i++)
  {
  int x,y,z;
  cin>>x>>y>>z;
  per[x]-=z;
  per[y]+=z;
  }
  int sum=0;
  for(int i =1;i<=n;i++)
  {
      if(per[i]>0)
      sum+=per[i];
  }
  cout<<sum;









   return 0;
}
