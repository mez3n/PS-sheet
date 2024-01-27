//
// Created by Mazen on 11/14/2023.
//
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> out(n+1,1);
    unordered_map<int, bool> mark;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int cnt = 0;
    for (auto x: mp) {
        if (x.second >= 2) {
            cnt++;
        }
        if (cnt >= 2) {
            break;
        }
    }
    if (cnt < 2) {
        cout << -1;
        return ;
    }
    bool flag =false;
    for (int i = 0; i < n; i++) {
      if(mp[arr[i]]>=2)
      {
          if(!flag)
          {
              out[i]=3;
              flag=true;
          }
          else if(mark[arr[i]])
          {
              out[i]=2;
          }
          mark[arr[i]]=true;
      }
    }
    for(int i=0;i<n;i++)
    {
        cout<<out[i]<<" ";
    }


}


int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}