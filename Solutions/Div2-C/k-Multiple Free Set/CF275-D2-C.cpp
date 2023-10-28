//
// Created by Mazen on 10/27/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n + 1);
    unordered_map<long long, long long> ht;
    for (long long i = 1; i < n + 1; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (long long i = 1; i <= n; i++) {
        ht[arr[i]] = 1;
    }
    int cnt = 0;
    for (int i = 1; i < n + 1; i++) {
        if (ht[arr[i]] == 1) {
            if(ht[arr[i]*k]==1)
            {
                ht[arr[i]*k]=0;
            }
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}