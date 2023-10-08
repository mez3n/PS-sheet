//
// Created by Mazen on 10/3/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> arr(n,true);
    for (int i = 2; i <= n; i++)
    {
        if(arr[i])
        for(int j=i*2;j<=n;j+=i)
        {
            arr[j]=false;
        }
    }
vector<int>out;
    for(int i =2;i<=n;i++)
    {
      if(arr[i])
      {
          int x=i;
          while(x<=n)
          {
              out.push_back(x);
              x*=i;
          }
      }
    }
    cout<<out.size()<<endl;
    for(int i =0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }


    return 0;
}