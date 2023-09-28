//
// Created by Mazen on 9/7/2023.
//
#include<bits/stdc++.h>

using namespace std;
struct number{
    int no=10e6;
    int p=-1;
};
bool sorting(number a,number b)
{
    return a.no>b.no;
}
int main() {
    vector<number> p (10e5+100);
    vector<int> number(10e5+100,-1);
    set<int>x;
    int n;
    cin>>n;
    int max =0;
    for (int i = 0; i < n; i++) {
      int x;
      cin>>x;
      if(p[x].no==10e7)
      {
          continue;
      }
      p[x].no=x;
      if(x>max)
      {
          max=x;
      }
      if(number[x]==-1)
      {
        number[x]=i;
        p[x].p=0;
      }
      else
      {
          if(p[x].p==0)
          {
              p[x].p=i-number[x];
              number[x]=i;
          }
          else
          {
              if(i-number[x]!=p[x].p)
              {
                  p[x].no=10e7;
              }
              else{
                  number[x]=i;
              }
          }
      }
    }
    sort(p.begin(),max+p.begin(), sorting);
    int i =0;
    while(p[i].no<10e5+100)
    {
        cout<<p[i].no<<" "<<p[i].p;
        i++;
    }


    return 0;
}