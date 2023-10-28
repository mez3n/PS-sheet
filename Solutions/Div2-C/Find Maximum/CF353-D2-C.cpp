//
// Created by Mazen on 10/21/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    vector<int> presum(n + 1);
    for (int i = 0; i < n; i++) {
        presum[i + 1] = presum[i] + arr[i];
    }
    int last =0, ans=0;
    for(int i =n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            ans=max(ans,presum[i]+last);
            last+=arr[i];
        }
    }
    ans=max(ans,last);
    cout<<ans;


    return 0;
}