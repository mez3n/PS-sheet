//
// Created by Mazen on 10/28/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, sum;
    cin >> n >> sum;
    vector<long long> arr(n);
    long long all = 0;
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        all += arr[i];
    }
    vector<long long> out(n);
    for (long long i = 0; i < n; i++) {
        long long end = min(sum - (n - 1), arr[i]);
        long long start = max(1ll, sum - (all - arr[i]));
        out[i] = arr[i] - (end - start + 1);
    }
    for (long long i = 0; i < n; i++) {
        cout << out[i] << " ";
    }


    return 0;
}