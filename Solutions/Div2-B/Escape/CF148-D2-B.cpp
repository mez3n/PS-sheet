//
// Created by Mazen on 8/30/2023.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int vp,vd,f,c;
  double t;
  cin>>vp>>vd>>t>>f>>c;
  double x;
  int count=0;
  x=vp*t;
  if(vp>=vd)
  {
      cout<<0;
      return 0;
  }
  t= (x/(vd-vp));
  x+=t*vp;
  if(x>=c)
  {
      cout<<0;
      return 0;
  }
  count++;
  while(x<c)
  {
      x+=(((x/vd))+f)*vp;
      t=(x/(vd-vp));
      x+=t*vp;
      if(x>=c)
      {
          cout<<count;
          return 0;
      }
      count++;
  }
    cout<<count;
    return 0;




}